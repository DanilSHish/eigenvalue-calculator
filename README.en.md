# Eigenvalue Calculator for Symmetric Matrices

[![C++](https://img.shields.io/badge/C++-CLI-blue.svg)](https://en.wikipedia.org/wiki/C%2B%2B/CLI)
[![Visual Studio](https://img.shields.io/badge/Visual%20Studio-2019+-purple.svg)](https://visualstudio.microsoft.com/)
[![.NET Framework](https://img.shields.io/badge/.NET%20Framework-4.7.2+-green.svg)](https://dotnet.microsoft.com/)

> A Windows Forms desktop application for computing eigenvalues and eigenvectors of symmetric matrices using the **inverse iteration method**.

![Application Screenshot](assets/screenshot.png)

## Features

- Compute multiple eigenvalues and corresponding eigenvectors
- Interactive GUI with real-time matrix input
- File-based data loading support
- Configurable precision (epsilon)
- Visual feedback for symmetric matrix input
- Results export capability

## Algorithm

This application implements the **inverse iteration method** (also known as the inverse power method) with Hotelling's deflation:

1. **Power Iteration**: Iteratively multiplies matrix by vector to converge to the dominant eigenvalue
2. **Rayleigh Quotient**: Computes eigenvalue approximation
3. **Deflation**: Removes found eigenvalue from matrix to find subsequent ones
4. **Convergence Check**: Stops when change between iterations is less than epsilon

### Mathematical Background

For a symmetric matrix **A**, the method finds eigenvalues λ and eigenvectors **v** such that:

```
A · v = λ · v
```

The algorithm uses the iterative formula:
```
y(k+1) = A · x(k)
x(k+1) = y(k+1) / ||y(k+1)||
λ(k) = (x(k)ᵀ · A · x(k)) / (x(k)ᵀ · x(k))
```

## Requirements

- Windows 7/8/10/11
- Visual Studio 2019 or later
- .NET Framework 4.7.2 or later
- C++/CLI support

## Building from Source

### Using Visual Studio

1. Clone the repository:
```bash
git clone https://github.com/yourusername/eigenvalue-calculator.git
cd eigenvalue-calculator
```

2. Open `EigenvalueCalculator.sln` in Visual Studio

3. Select configuration: `Debug` or `Release`

4. Build the solution: `Ctrl+Shift+B`

5. Run: `F5`

### Using MSBuild

```bash
msbuild EigenvalueCalculator.sln /p:Configuration=Release /p:Platform="x86"
```

## Usage

### GUI Mode

1. Launch the application
2. Set matrix dimension (n) - max 10x10
3. Specify number of eigenvalues to find (K)
4. Set precision (eps) - default 0.00001
5. Enter matrix elements in the upper triangle
6. Enter initial approximation vector
7. Click **Calculate**

### File Input Mode

Create a text file with the following format:

```
n K eps
a11 a12 a13 ... a1n
    a22 a23 ... a2n
        a33 ... a3n
            ...
                ann
x1 x2 x3 ... xn
```

Example (3x3 matrix):
```
3 3 0.00001
4 1 2
  3 1
    2
1 1 1
```

Then select **"From file"** option and load your file.

## Input Parameters

| Parameter | Description | Constraints |
|-----------|-------------|-------------|
| n | Matrix dimension | 1 ≤ n ≤ 10 |
| K | Number of eigenvalues | 1 ≤ K ≤ n |
| N | Vector dimension | N = n |
| eps | Precision | eps > 0 |

## Output

The program displays:
- **Eigenvalues**: List of found eigenvalues (λ₁, λ₂, ..., λₖ)
- **Eigenvectors**: Corresponding normalized eigenvectors

## Project Structure

```
.
├── src/
│   ├── MyForm.h              # Main form header with algorithm
│   ├── MyForm.cpp            # Application entry point
│   ├── MyForm.resx           # Resources
│   └── EigenvalueCalculator.vcxproj  # Project file
├── EigenvalueCalculator.sln  # Solution file
├── examples/             # Sample input files
├── assets/               # Screenshots and images
├── LICENSE
└── README.md
```

## Example

### Input Matrix
```
| 4  1  2 |
| 1  3  1 |
| 2  1  2 |
```

### Results
```
Eigenvalues:
1)  6.155367
2)  2.560145
3)  0.284488

Eigenvectors:
1)  0.680451   0.425190   0.597208
2) -0.223458   0.892745  -0.389662
3)  0.697668  -0.151948  -0.699982
```

## Limitations

- Maximum matrix size: 10x10
- Symmetric matrices only
- Real values only (no complex support)
- Windows platform only

## Future Improvements

- [ ] Cross-platform Qt version
- [ ] Complex eigenvalue support
- [ ] Matrix visualization
- [ ] Export to CSV/Excel
- [ ] Plotting eigenvalue convergence
- [ ] QR algorithm implementation

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Course work for Numerical Methods class
- Algorithm reference: "Numerical Recipes in C"
- Icons by [Icons8](https://icons8.com)

## Contact

Author: [Your Name](mailto:your.email@example.com)

Project Link: [https://github.com/yourusername/eigenvalue-calculator](https://github.com/yourusername/eigenvalue-calculator)
