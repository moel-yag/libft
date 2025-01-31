# libft

## Project Overview
`libft` is a custom C library that includes a collection of utility functions designed to handle common tasks in C programming. The purpose of this project is to help you develop and improve your understanding of memory management, string manipulation, and other fundamental operations in C by writing your own implementations of standard library functions.

This project includes various functions such as string handling, memory allocation, mathematical functions, and more, aiming to mimic the behavior of commonly used C standard library functions.

## Project Requirements
The goal of the project is to create a library with the following functions:

- String manipulation functions (e.g., `ft_strlen`, `ft_strcpy`, `ft_strcat`, etc.)
- Memory management functions (e.g., `ft_memset`, `ft_memcpy`, `ft_malloc`, etc.)
- Additional utility functions (e.g., `ft_isdigit`, `ft_atoi`, `ft_strdup`, etc.)

## Functions

### String Functions
- **ft_strlen**: Returns the length of a string.
- **ft_strcpy**: Copies a string to another.
- **ft_strcat**: Concatenates two strings.
- **ft_strchr**: Locates the first occurrence of a character in a string.
- **ft_strrchr**: Locates the last occurrence of a character in a string.

### Memory Functions
- **ft_memset**: Sets memory to a specified value.
- **ft_memcpy**: Copies memory from one location to another.
- **ft_memmove**: Moves memory from one location to another.
- **ft_bzero**: Sets memory to zero.

### Utility Functions
- **ft_isdigit**: Checks if a character is a digit.
- **ft_atoi**: Converts a string to an integer.
- **ft_strdup**: Duplicates a string.
- **ft_tolower**: Converts a character to lowercase.
- **ft_toupper**: Converts a character to uppercase.

_(You can add more functions here as needed.)_

## Requirements
- The project must not use any standard library functions such as `malloc`, `free`, `printf`, etc., except for `write` and `read`.
- The functions must follow the behavior and prototype of their standard counterparts, unless specified otherwise.
- You must write comprehensive test cases to validate the functionality of your functions.

## Compilation

To compile the library, use the following `make` command:

```bash
make
