# Architecture Overview

## System Design

This document describes the architecture of the Eigenvalue Calculator application.

### Application Type
- **Platform**: Windows Desktop
- **Framework**: .NET Framework 4.6.1+
- **UI Technology**: Windows Forms (C++/CLI)
- **Architecture Pattern**: Single-form desktop application with event-driven UI

## Project Structure

```
src/
├── MyForm.h          # Main form class with algorithm implementation
├── MyForm.cpp        # Application entry point (main)
├── MyForm.resx       # Windows Forms resources (icons, layouts)
└── EigenvalueCalculator.vcxproj  # Project file
```

## Class Architecture

### MyForm Class
The main form class inherits from `System::Windows::Forms::Form` and contains:

#### UI Components (Auto-generated)
- `dataGridView1` - Matrix input grid (upper triangle only)
- `dataGridView2` - Initial vector input
- `numericUpDown1-3` - Parameter inputs (n, K, N)
- `listBox1-2` - Results display (eigenvalues, eigenvectors)
- `radioButton1-2` - Input mode selection
- `menuStrip1` - Application menu

#### Core Methods

| Method | Purpose | Algorithm Complexity |
|--------|---------|---------------------|
| `Matr()` | Main eigenvalue calculation | O(K × N³) |
| `ReadFromFile()` | File I/O for matrix data | O(N²) |
| `initDataGridView_1_2()` | UI initialization | O(N²) |

## Algorithm Architecture

### Inverse Iteration Method

```
┌─────────────────────────────────────────────────────────┐
│                    INPUT PHASE                          │
│  ┌─────────────┐  ┌─────────────┐  ┌─────────────────┐  │
│  │  Matrix A   │  │  Vector x   │  │ Parameters      │  │
│  │  (symmetric)│  │  (initial)  │  │ K, N, epsilon   │  │
│  └─────────────┘  └─────────────┘  └─────────────────┘  │
└─────────────────────────────────────────────────────────┘
                           │
                           ▼
┌─────────────────────────────────────────────────────────┐
│                 ITERATION ENGINE                        │
│  for each eigenvalue (b = 1 to K):                      │
│    ┌──────────────────────────────────────────────┐    │
│    │ 1. Initialize vector x₀                       │    │
│    │                                               │    │
│    │ 2. Power Iteration Loop:                      │    │
│    │    while |p - f| > epsilon:                   │    │
│    │      y = A × x                                │    │
│    │      x = y / ||y||                            │    │
│    │      lambda = (xᵀ·A·x) / (xᵀ·x)               │    │
│    │                                               │    │
│    │ 3. Store (lambda, x) as eigenpair             │    │
│    │                                               │    │
│    │ 4. Deflate matrix (Hotelling):                │    │
│    │    A = A - lambda × x × xᵀ                    │    │
│    └──────────────────────────────────────────────┘    │
└─────────────────────────────────────────────────────────┘
                           │
                           ▼
┌─────────────────────────────────────────────────────────┐
│                   OUTPUT PHASE                          │
│  ┌─────────────┐  ┌─────────────┐                       │
│  │ Eigenvalues │  │ Eigenvectors│                       │
│  │ (lambda[])  │  │ (v[][])     │                       │
│  └─────────────┘  └─────────────┘                       │
└─────────────────────────────────────────────────────────┘
```

### Memory Layout

```
Array 'a' layout (size: M×M):
┌──────────────────────────────────────┐
│ a[0]        a[1]        a[2]  ...   │  <- Upper triangle storage
│ a[1]        a[2]        a[3]        │
│ a[3]        a[4]        a[5]        │
│ ...                                 │
├──────────────────────────────────────┤
│ a[n1]       a[n1+1]    ...          │  <- Initial vector
│                                     │
├──────────────────────────────────────┤
│ a[n2]       a[n2+1]    ...          │  <- Result vector (y)
└──────────────────────────────────────┘

Where:
  n1 = N × (N + 1) / 2  <- Start of vector storage
  n2 = n1 + N           <- Start of result storage
```

## Data Flow

### GUI Input Flow
```
User Input → dataGridView → Validation → mas[][] array → Matr()
         ↓
         → numericUpDown → Parameters (K, N, eps)
```

### File Input Flow
```
File.txt → StreamReader → Parse → AB[][] → Populate UI → mas[][] → Matr()
```

### Output Flow
```
Matr() → XY[][] → String::Format → listBox → Display
```

## Convergence Criteria

The iteration stops when:
```
|p - f| < epsilon
```

Where:
- `p` = max(|xᵢ|) - current iteration maximum
- `f` = max(|xᵢ|) - previous iteration maximum
- `epsilon` = user-specified precision (default: 0.00001)

## Constraints & Limitations

### Hard Limits
| Parameter | Limit | Reason |
|-----------|-------|--------|
| M (max size) | 10 | Stack array allocation |
| N (matrix size) | 1-10 | UI grid constraints |
| K (eigenvalues) | 1-N | Algorithm requirement |
| eps (precision) | > 0 | Mathematical constraint |

### Input Validation
- Symmetric matrix (only upper triangle editable)
- Numeric input only (KeyPress handler)
- All fields required before calculation

## Error Handling

| Error Type | Handling |
|------------|----------|
| Empty input fields | MessageBox warning |
| Invalid file format | Exception catch (implicit) |
| Non-numeric input | KeyPress filter |
| Out of bounds | NumericUpDown limits |

## Build Configuration

### Debug
- CLR Support: true
- Runtime checks enabled
- PDB symbols generated

### Release
- CLR Support: true
- Optimizations enabled
- No debug symbols

## Dependencies

```
System.dll
System.Data.dll
System.Drawing.dll
System.Windows.Forms.dll
System.Xml.dll
```

## Threading Model

- **UI Thread**: Single-threaded Windows Forms
- **Computation**: Synchronous on UI thread
- **No background workers** (potential improvement area)

## Future Architectural Improvements

1. **Separation of Concerns**
   - Extract algorithm to separate C++ class
   - Create interface for different methods (QR, Jacobi)

2. **Performance**
   - Implement async computation
   - Add progress bar for large matrices
   - Optimize memory access patterns

3. **Testing**
   - Add unit tests for Matr() function
   - Add validation tests for edge cases

4. **Cross-platform**
   - Replace C++/CLI with C# WinForms or Qt
   - Abstract UI from algorithm
