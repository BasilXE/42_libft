*This project has been created as part of the 42 curriculum by basayoub.*

# Libft
## Description
This project involves coding a custom C library from scratch that includes numerous general-purpose functions. The goal is to deeply understand how standard C library (libc) functions work by implementing them manually, ultimately creating a valuable toolkit for future C programming assignments.

### Library Overview
The library is structured into three main categories:

* **Part 1 - Libc functions:** Reimplementations of standard C library functions sharing the same prototypes and behaviors as the originals, but prefixed with `ft_`. This includes memory manipulation (e.g., `ft_memset`, `ft_memcpy`), string operations (e.g., `ft_strlen`, `ft_strchr`), and character classification (e.g., `ft_isalpha`, `ft_isdigit`).
* **Part 2 - Additional functions:** A set of useful utility functions that are either not included in the standard libc or exist in a different form. This includes advanced string manipulation (`ft_split`, `ft_strjoin`), integer conversions (`ft_itoa`), and file descriptor output functions (`ft_putchar_fd`, `ft_putstr_fd`).
* **Part 3 - Linked lists:** A set of functions designed to manipulate linked lists using a custom `t_list` structure. It includes utilities to create nodes (`ft_lstnew`), add nodes (`ft_lstadd_front`, `ft_lstadd_back`), and manage list memory (`ft_lstdelone`, `ft_lstclear`).

## Instructions

### Compilation
The project includes a Makefile that compiles the source files and uses the `ar rcs` command to package them into a static library named `libft.a`. 

Run the following commands at the root of your repository:
* `make`: Compiles all source files into the static library.
* `make clean`: Removes the generated `.o` object files.
* `make fclean`: Removes the object files and the `libft.a` archive.
* `make re`: Performs a full recompilation by running `fclean` followed by `make`.

### Usage
To use this library in your own C projects:
1. Include the header in your C source files: 
   `#include "libft.h"`
2. Compile your program by linking the library archive: 
   `ar rcs libft.a ft_*.o`

## Resources
* Standard C manual pages (e.g., `man atoi`, `man memmove`, `man calloc`).
* The official 42 Norm documentation.

### AI Usage
AI was not used to write the underlying C code or directly solve the project logic.
AI was only helped me understanding issue and problems