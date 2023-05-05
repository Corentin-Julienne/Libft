# Libft

## 🗣️ About

Libft is the first project in the main 42 cursus. 

The goal is to make a lot of basic functions from maintream C librairies.

More information can be found below and in the subject PDF.

## ⚙️ Content of the Library

### Functions from `<ctype.h>` library

[`ft_isalnum`](./ft_isalnum.c) : test for alphanumeric character <br>
[`ft_isalpha`](./ft_isalpha.c) : test for alphabetic character <br>
[`ft_isascii`](./ft_isascii.c) : test for ASCII character <br>
[`ft_isdigit`](./ft_isdigit.c) : test for digit <br>
[`ft_islower`](./ft_islower.c) : test for lowercase character <br>
[`ft_isprint`](./ft_isprint.c) : test for printable character <br>
[`ft_isupper`](./ft_isupper.c) : test for uppercase character <br>
[`ft_tolower`](./ft_tolower.c) : returns a lowercase version of an uppercase character <br>
[`ft_toupper`](./ft_toupper.c) : returns an uppercase version of a lowercase character <br>

### Functions from `<stdlib.h>` library

[`ft_atoi`](./ft_atoi.c) : converts a char* to an int <br>
[`ft_calloc`](./ft_calloc.c) : allocates contiguous blocks of memory <br>

### Functions from `<strings.h>` library



### Functions from `<strings.h>` library



### Non-standard functions

[`ft_putchar_fd`](./ft_putchar_fd.c) : writes a char on a given file descriptor <br>
[`ft_putstr_fd`](./ft_putstr_fd.c) : writes a string on a given file descriptor <br>
[`ft_putendl_fd`](./ft_putendl_fd.c) : writes a string on a given file descriptor with new line <br>
[`ft_putnbr_fd`](./ft_putnbr_fd.c) : write a number on a given file descriptor <br>
[`ft_itoa`](./ft_itoa.c) : converts an int to a char* <br>
[`ft_substr`](./ft_substr.c) : returns a substring <br>
[`ft_strtrim`](./ft_strtrim.c) : trim an array of characters <br>
[`ft_strjoin`](./ft_strjoin.c) : join two strings together <br>
[`ft_split`](./ft_split.c) : converts a char* into a char** based on a given delimiter <br>

### Linked list functions

[`ft_lstnew`](./ft_lstnew.c) : <br>
[`ft_lstsize`](./ft_lstsize.c) : <br>
[`ft_lstlast`](./ft_lstlast.c) : <br>
[`ft_lstadd_back`](./ft_lstadd_back.c) : <br>
[`ft_lstadd_front`](./ft_lstadd_front.c) : <br>
[`ft_lstdelone`](./ft_lstdelone.c) : <br>
[`ft_lstclear`](./ft_lstclear.c) : <br>
[`ft_lstiter`](./ft_lstiter.c) : <br>
[`ft_lstmap`](./ft_lstmap.c) : <br>

## 💿 Compilation and Execution

The program is furnished with a Makefile. Write ```make```in order to create a static libray and object files. Note that this project is not designed to be a standalone application but as a atatic library.

## 🗑️ Deletion

Write ```make fclean``` to remove both objects files and static library and ```make clean``` to remove object files only.

## ✅ Validation

This project has been validated with a mark of 115/100 (with bonus).
