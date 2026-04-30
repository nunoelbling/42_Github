*This project has been created as part of the 42 curriculum by nuelblin.*

# Libft

### Description
The **Libft** project consists of creating a personal C library that recodes
several functions from the standard C library (libc), as well as other utility
functions that serve as a foundation for the rest of the 42 curriculum. The
primary goal is to consolidate knowledge about memory manipulation, pointers
and basic data structures like linked lists.

### Detailed Library Description
The library is divided into three main sections:
1. **Libc Functions:** Recoding of standard functions such as `strlen`
`memcpy`, `strnstr`, and `atoi`.
2. **Additional Functions:** Functions that are not part of the original libc
but are useful for everyday C programming, such as `ft_split` (for string
splitting) or `ft_itoa` (for converting integers to strings).
3. **Bonus (Linked Lists):** A set of functions to create and manipulate
dynamic lists using the `t_list` structure.

### Instructions
The project uses a Makefile to manage compilation. You can use the following
commands:

* `make`: Compiles the mandatory functions and generates libft.a.
* `make bonus`: Compiles both mandatory and linked list functions.
* `make clean`: Removes the object files (.o).
* `make fclean`: Removes the object files and the library file (.a).
* `make re`: Performs an fclean followed by a make.

## Resources

### Documentation & References
* **Man Pages**: Consulted the official Linux manual pages for the technical
specifications of standard `libc` functions.
* **YouTube**: Utilized as a primary visual learning resource, which was
essential for understanding complex concepts such as **linked list**
manipulation and **type casting** in C.

### Use of AI
In this project, AI (Gemini) was utilized as an adaptive supportive tool for
the following tasks and project components:

* **Conceptual Explanations**: Gemini was used to explain specific logic and
edge cases that were difficult to find elsewhere on the internet.
It was particularly helpful in creating tailored examples for a better
understanding of **node structures** and pointer indirection (`**lst`).
* **Documentation Support**: Gemini helped structure and format this 
`README.md` file to ensure compliance with the specific 42 curriculum
requirements, such as the italicized identification line and mandatory
sections.

To use this library in your projects, include the header in your C files:

#include "libft.h"