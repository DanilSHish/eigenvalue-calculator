# Eigenvalue Calculator for Symmetric Matrices

**English** | [Русский](README.ru.md)

> A Windows Forms desktop application for computing eigenvalues and eigenvectors of symmetric matrices using the **inverse iteration method**.

## Documentation

- [English Documentation](README.en.md)
- [Русская документация](README.ru.md)
- [Architecture (EN)](ARCHITECTURE.en.md) | [Архитектура (RU)](ARCHITECTURE.ru.md)

## Quick Start

### Requirements
- Windows 7/8/10/11
- Visual Studio 2019 or later / Visual Studio 2022
- .NET Framework 4.7.2 or later
- C++/CLI support enabled

### Build
```bash
git clone https://github.com/yourusername/eigenvalue-calculator.git
cd eigenvalue-calculator
msbuild EigenvalueCalculator.sln /p:Configuration=Release /p:Platform="x86"
```

### Usage
1. Launch the application
2. Set matrix dimension (n ≤ 10)
3. Enter matrix elements (upper triangle)
4. Enter initial vector
5. Click **Calculate**

## Project Structure

```
.
├── src/                    # Source code
│   ├── MyForm.h           # Main form with algorithm
│   ├── MyForm.cpp         # Entry point
│   └── EigenvalueCalculator.vcxproj  # Project file
├── examples/              # Sample input files
├── assets/                # Icons and images
├── README.en.md           # English documentation
├── README.ru.md           # Russian documentation
├── ARCHITECTURE.en.md     # Architecture overview (EN)
├── ARCHITECTURE.ru.md     # Architecture overview (RU)
├── CHANGELOG.md           # Version history
├── CONTRIBUTING.md        # Contribution guide
└── LICENSE                # MIT License
```

## Features

- Compute multiple eigenvalues and eigenvectors
- Interactive GUI with real-time matrix input
- File-based data loading
- Configurable precision (epsilon)
- Support for matrices up to 10×10

## Algorithm

**Inverse Iteration Method** with Hotelling's deflation:

```
y(k+1) = A × x(k)
x(k+1) = y(k+1) / ||y(k+1)||
λ(k) = (x(k)ᵀ · A · x(k)) / (x(k)ᵀ · x(k))
```

See [Architecture](ARCHITECTURE.en.md) for detailed technical documentation.

## License

This project is licensed under the [MIT License](LICENSE).

---

## Калькулятор собственных значений симметричных матриц

**Русский** | [English](README.en.md)

> Десктопное приложение Windows Forms для вычисления собственных значений и собственных векторов симметричных матриц методом **обратных итераций**.

## Быстрый старт

### Требования
- Windows 7/8/10/11
- Visual Studio 2019 или новее / Visual Studio 2022
- .NET Framework 4.7.2 или новее
- Поддержка C++/CLI

### Сборка
```bash
git clone https://github.com/yourusername/eigenvalue-calculator.git
cd eigenvalue-calculator
msbuild EigenvalueCalculator.sln /p:Configuration=Release /p:Platform="x86"
```

### Использование
1. Запустите приложение
2. Задайте размерность матрицы (n ≤ 10)
3. Введите элементы матрицы (верхний треугольник)
4. Введите начальный вектор
5. Нажмите **Вычислить**
