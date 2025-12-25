*This project has been created as part of the 42 curriculum by ancheab.*

# Libtft - Custom C Library

## Description

Libtft is a custom C library project that recreates and extends the functionality of the standard C library (libc). This project is part of the 42 school curriculum and serves as a foundational exercise in understanding low-level programming, memory management, and the implementation of standard library functions from scratch.

The goal of this project is to: 
- Implement a comprehensive set of standard C library functions
- Develop a deep understanding of memory manipulation and string handling
- Create a reusable library for future 42 projects
- Practice writing clean, efficient, and well-documented C code

The library includes implementations of string manipulation functions, memory management utilities, character checks, linked list operations, and various other utility functions that are essential for C programming.

## Instructions

### Prerequisites

- GCC or Clang compiler
- Make
- A Unix-based operating system (Linux, macOS, or WSL)

### Compilation

To compile the library, run: 

```bash
make
```

This will generate a `libft.a` static library file.

Other available make commands:
```bash
make clean    # Remove object files
make fclean   # Remove object files and the library
make re       # Recompile the entire library
```

### Installation

After compilation, you can use the library in your projects by: 

1. Including the header file in your source code: 
```c
#include "libft.h"
```

2. Compiling your project with the library:
```bash
gcc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

### Usage Example

```c
#include "libft. h"

int main(void)
{
    char *str;
    
    str = ft_strdup("Hello, 42!");
    ft_putendl_fd(str, 1);
    free(str);
    
    return (0);
}
```

## Features

The library typically includes implementations of the following function categories:

- **Character checks and conversions**: `ft_isalpha`, `ft_isdigit`, `ft_toupper`, `ft_tolower`, etc.
- **String manipulation**: `ft_strlen`, `ft_strcpy`, `ft_strdup`, `ft_strjoin`, `ft_split`, etc.
- **Memory management**: `ft_memset`, `ft_memcpy`, `ft_calloc`, `ft_bzero`, etc.
- **Output functions**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putnbr_fd`, etc.
- **Linked list operations**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstmap`, etc.
- **Additional utilities**: `ft_itoa`, `ft_atoi`, `ft_substr`, `ft_strtrim`, etc.

## Project Structure

```
.
├── Makefile
├── libft.h          # Header file with function prototypes
├── ft_*. c           # Implementation files for each function
└── README.md        # This file
```

## Resources

### Documentation and References
- [The C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language) - Classic C programming reference
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/) - Official libc documentation
- [C Standard Library Reference](https://en.cppreference.com/w/c) - Comprehensive C library reference
- [42 Docs - Libft](https://harm-smits.github.io/42docs/projects/libft) - Community documentation for the Libft project
- [man pages](https://man7.org/linux/man-pages/) - Linux manual pages for standard functions

### Tutorials and Articles
- [Understanding Pointers in C](https://www.geeksforgeeks.org/c-pointers/) - Essential for memory management
- [Linked Lists in C](https://www.learn-c.org/en/Linked_lists) - For the bonus part implementation
- [Makefile Tutorial](https://makefiletutorial.com/) - Understanding compilation automation

### AI Usage

AI assistance (GitHub Copilot/ChatGPT) was used in the following capacity: 

- **Documentation**: Generating comprehensive comments and this README structure
- **Debugging**: Identifying edge cases and potential memory leaks during testing
- **Code review**: Suggesting optimizations and catching potential bugs
- **Research**: Explaining complex concepts like memory alignment and bitwise operations

**Parts NOT created with AI**:
- Core algorithm implementations - all function logic was written manually
- Problem-solving approach and design decisions
- Testing and validation of edge cases

All code implementations were written independently to ensure deep understanding of the concepts, with AI used only as a supplementary learning and documentation tool.

## Author

**anassalien123** - [GitHub Profile](https://github.com/anassalien123)

## License

This project is part of the 42 school curriculum and follows their academic policies. 

---

*Made with ☕ at 42*
