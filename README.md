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

[`ft_bzero`](./ft_bzero.c) : writes n zeroed bytes to the string s <br>
[`ft_memset`](./ft_memset.c) : writes len bytes of value c (converted to an unsigned char) to the string b <br>
[`ft_memchr`](./ft_memchr.c) : locates the first occurrence of c (converted to an unsigned char) in string s <br>
[`ft_memcmp`](./ft_memcmp.c) : compares byte string s1 against byte string s2 <br>
[`ft_memmove`](./ft_memmove.c) : copies len bytes from string src to string dst <br>
[`ft_memcpy`](./ft_memcpy.c) : copies n bytes from memory area src to memory area dst <br>
[`ft_memccpy`](./ft_memccpy.c) : copies bytes from string src to string dst <br>

### Functions from `<string.h>` library

[`ft_strlen`](./ft_strlen.c) : returns size of the char* (minus \0) <br>
[`ft_strchr`](./ft_strchr.c) : locates the first occurrence of c (converted to a char) in the string pointed to by s <br>
[`ft_strrchr`](./ft_strrchr.c) : locates the last occurrence of c (converted to a char) in the string pointed to by s <br>
[`ft_strstr`](./ft_strstr.c) : locates the first occurrence of the null-terminated string needle in the null-terminated string haystack <br>
[`ft_strnstr`](./ft_strnstr.c) : locates the first occurrence of the null-terminated string needle in the null-terminated string haystack (bounded) <br>
[`ft_strcmp`](./ft_strcmp.c) :  lexicographically compare the null-terminated strings s1 and s2 <br>
[`ft_strncmp`](./ft_strncmp.c) : lexicographically compare the null-terminated strings s1 and s2 (bounded) <br>
[`ft_strcpy`](./ft_strcpy.c) : copy the string src to dst (including the terminating ‘\0’ character.) <br>
[`ft_strncpy`](./ft_strncpy.c) : copy the string src to dst (including the terminating ‘\0’ character.) [bounded version] <br>
[`ft_strdup`](./ft_strdup.c) : allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it <br>
[`ft_strcat`](./ft_strcat.c) : append a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a terminating ‘\0’ <br>
[`ft_strlcpy`](./ft_strlcpy.c) : copies up to dstsize - 1 characters from the string src to dst, NULL-terminating the result if dstsize is not 0 <br>
[`ft_strlcat`](./ft_strlcat.c) : appends string src to the end of dst <br>
 
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

[`ft_lstnew`](./ft_lstnew.c) : creates a new list <br>
[`ft_lstsize`](./ft_lstsize.c) : returns size of list <br>
[`ft_lstlast`](./ft_lstlast.c) : return last member of list <br>
[`ft_lstadd_back`](./ft_lstadd_back.c) : add new element at the end of the list <br>
[`ft_lstadd_front`](./ft_lstadd_front.c) : add new element at the front of the list <br>
[`ft_lstdelone`](./ft_lstdelone.c) : delete one element of the list <br>
[`ft_lstclear`](./ft_lstclear.c) : delete all elements of the list <br>
[`ft_lstiter`](./ft_lstiter.c) : apply a given function to all elements of the list <br>
[`ft_lstmap`](./ft_lstmap.c) : apply a given function to all elements of the list into a new list <br>

## 💿 Compilation and Execution

The program is furnished with a Makefile. Write ```make```in order to create a static libray and object files. Note that this project is not designed to be a standalone application but as a atatic library.

## 🗑️ Deletion

Write ```make fclean``` to remove both objects files and static library and ```make clean``` to remove object files only.

## ✅ Validation

This project has been validated with a mark of 115/100 (with bonus).
