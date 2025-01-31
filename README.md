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

This will generate a static library file called libft.a in the root directory.
Running the Tests

To check the functionality of your library, you can use a test suite. If you've written test cases (e.g., in a separate main.c file or using a framework), compile and run them as follows:

gcc -Wall -Wextra -Werror -o test test.c libft.a
./test

Ensure your functions are thoroughly tested to confirm they work as expected.
Installation

    Clone the repository:

git clone https://github.com/yourusername/libft.git

Navigate to the project directory:

cd libft

Run make to build the library:

    make

    Include the libft.a static library in your other C projects by linking to it.

Usage

You can link your libft functions in other C projects by including the libft.h header file and linking against libft.a. For example:

#include "libft.h"

int main() {
    char *str = "Hello, World!";
    printf("Length of string: %zu\n", ft_strlen(str));
    return 0;
}

To compile with the libft.a library:

gcc -o my_program my_program.c -L. -lft

This tells the compiler to link against the libft.a library located in the current directory.
Contributing

If you'd like to contribute to this project, feel free to fork the repository, create a branch, and submit a pull request with your changes.
License

This project is licensed under the MIT License - see the LICENSE file for details.
Acknowledgements

This project is a part of the 42 curriculum. Many thanks to the 42 community for the support and resources provided throughout the development of this project.


### Customization Points:
- Update the list of functions based on what you actually implemented in your `libft` (I've listed common functions typically found in such libraries, but you can add or remove functions as needed).
- The example for linking the library (`-L. -lft`) assumes the `libft.a` file is in the current directory. Adjust the path if your setup is different.
- Don't forget to add tests for your functions! It's important to verify that each function behaves as expected.

Let me know if you'd like further tweaks or additions to this template!
