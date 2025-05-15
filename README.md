# 🖨️ ft_printf

> A custom implementation of the standard `printf` function in C.

## 📌 Description

**ft_printf** is a 42 School project that re-implements the core functionality of the C `printf` function from scratch. It supports formatted output with various specifiers, flags, field widths, and precision. The goal is to understand variadic functions, string formatting, and low-level output control — all without using the standard `printf`.

## ⚙️ Features

- Supports format specifiers: `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, `%%`
- Handles flags like `-`, `0`, width, and precision
- Parses and formats arguments using variadic functions (`stdarg.h`)
- Prints to standard output using `write()`

## 🚀 Getting Started

### 🔧 Compilation

```bash
make
#include "ft_printf.h"

int main(void)
{
	ft_printf("Hello, %s! You scored %d/100.\n", "Ayesha", 95);
	return 0;
}

