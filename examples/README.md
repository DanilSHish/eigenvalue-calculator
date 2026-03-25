# Examples

This folder contains example input files for the Eigenvalue Calculator.

## File Format

```
n K eps
a11 a12 ... a1n
    a22 ... a2n
        ...
           ann
x1 x2 ... xn
```

Where:
- **n** - matrix dimension (1-10)
- **K** - number of eigenvalues to find (1 ≤ K ≤ n)
- **eps** - precision (e.g., 0.00001)
- **aij** - matrix elements (upper triangle only, symmetric matrix)
- **xi** - initial approximation vector elements

## Files

### matrix_3x3.txt
A simple 3x3 symmetric matrix example.

**Expected results:**
- Eigenvalues: ~6.16, ~2.56, ~0.28

### matrix_4x4.txt
A 4x4 symmetric matrix example.

## Usage

1. Select "From file" option in the application
2. Choose one of these example files
3. Click "Calculate"
