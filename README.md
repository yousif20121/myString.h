# my_String.h

# Custom String and Memory Functions Documentation

This Markdown document provides documentation for a set of custom string and memory functions implemented in C.

## Table of Contents

- [Introduction](#introduction)
- [Function List](#function-list)
  - [my_strlen](#my_strlen)
  - [my_strcpy](#my_strcpy)
  - [my_strncpy](#my_strncpy)
  - [my_strcat](#my_strcat)
  - [my_strncat](#my_strncat)
  - [my_strcmp](#my_strcmp)
  - [my_strncmp](#my_strncmp)
  - [my_strchr](#my_strchr)
  - [my_strrchr](#my_strrchr)
  - [my_strstr](#my_strstr)
  - [my_strcspn](#my_strcspn)
  - [my_strspn](#my_strspn)
  - [my_strpbrk](#my_strpbrk)
  - [my_memset](#my_memset)
  - [my_memcmp](#my_memcmp)
  - [my_memcpy](#my_memcpy)
  - [my_memmove](#my_memmove)
  - [my_memchr](#my_memchr)

## Introduction

The following functions are custom implementations of commonly used string and memory functions found in the C Standard Library. These functions provide functionality for string manipulation, comparison, and memory operations.

## Function List

### my_strlen

```c
unsigned char my_strlen(const char *str);
```

- Description: Computes the length of the input string.
- Parameters:
  - `str`: A pointer to the null-terminated string.
- Returns: The length of the string.

### my_strcpy

```c
char *my_strcpy(char *destAdd, const char *srcAdd);
```

- Description: Copies the source string to the destination string.
- Parameters:
  - `destAdd`: A pointer to the destination string.
  - `srcAdd`: A pointer to the source string.
- Returns: A pointer to the destination string (`destAdd`).

### my_strncpy

```c
char *my_strncpy(char *destAdd, const char *srcAdd, char n_Copy);
```

- Description: Copies at most `n_Copy` characters from the source string to the destination string.
- Parameters:
  - `destAdd`: A pointer to the destination string.
  - `srcAdd`: A pointer to the source string.
  - `n_Copy`: The maximum number of characters to copy.
- Returns: A pointer to the destination string (`destAdd`).

### my_strcat

```c
char *my_strcat(char *destAdd, const char *srcAdd);
```

- Description: Concatenates the source string to the end of the destination string.
- Parameters:
  - `destAdd`: A pointer to the destination string.
  - `srcAdd`: A pointer to the source string.
- Returns: A pointer to the destination string (`destAdd`).

### my_strncat

```c
char *my_strncat(char *destAdd, const char *srcAdd, char n_Copy);
```

- Description: Concatenates at most `n_Copy` characters from the source string to the end of the destination string.
- Parameters:
  - `destAdd`: A pointer to the destination string.
  - `srcAdd`: A pointer to the source string.
  - `n_Copy`: The maximum number of characters to concatenate.
- Returns: A pointer to the destination string (`destAdd`).

### my_strcmp

```c
int my_strcmp(const char *str1Add, const char *str2Add);
```

- Description: Compares two strings lexicographically.
- Parameters:
  - `str1Add`: A pointer to the first string.
  - `str2Add`: A pointer to the second string.
- Returns: An integer indicating the comparison result: 0 if equal, negative if `str1Add` is less than `str2Add`, and positive if `str1Add` is greater than `str2Add`.

### my_strncmp

```c
int my_strncmp(const char *str1Add, const char *str2Add, char n_Copy);
```

- Description: Compares at most `n_Copy` characters of two strings lexicographically.
- Parameters:
  - `str1Add`: A pointer to the first string.
  - `str2Add`: A pointer to the second string.
  - `n_Copy`: The maximum number of characters to compare.
- Returns: An integer indicating the comparison result: 0 if equal, negative if `str1Add` is less than `str2Add`, and positive if `str1Add` is greater than `

str2Add`.

### my_strchr

```c
char *my_strchr(const char *strAdd, int wantedChar);
```

- Description: Searches for the first occurrence of `wantedChar` in the string.
- Parameters:
  - `strAdd`: A pointer to the null-terminated string.
  - `wantedChar`: The character to search for.
- Returns: A pointer to the first occurrence of `wantedChar` in the string, or `NULL` if not found.

### my_strrchr

```c
char *my_strrchr(const char *strAdd, int wantedChar);
```

- Description: Searches for the last occurrence of `wantedChar` in the string.
- Parameters:
  - `strAdd`: A pointer to the null-terminated string.
  - `wantedChar`: The character to search for.
- Returns: A pointer to the last occurrence of `wantedChar` in the string, or `NULL` if not found.

### my_strstr

```c
char *my_strstr(const char *haystack, const char *needle);
```

- Description: Searches for the first occurrence of `needle` in `haystack`.
- Parameters:
  - `haystack`: A pointer to the null-terminated string to search in.
  - `needle`: A pointer to the null-terminated string to search for.
- Returns: A pointer to the first occurrence of `needle` in `haystack`, or `NULL` if not found.

### my_strcspn

```c
unsigned int my_strcspn(const char *str1Add, const char *str2Add);
```

- Description: Computes the length of the initial segment of `str1Add` that consists of characters not in `str2Add`.
- Parameters:
  - `str1Add`: A pointer to the null-terminated string.
  - `str2Add`: A pointer to the null-terminated string containing characters to be excluded.
- Returns: The length of the initial segment.

### my_strspn

```c
unsigned int my_strspn(const char *str1Add, const char *str2Add);
```

- Description: Computes the length of the initial segment of `str1Add` that consists of characters in `str2Add`.
- Parameters:
  - `str1Add`: A pointer to the null-terminated string.
  - `str2Add`: A pointer to the null-terminated string containing characters to be included.
- Returns: The length of the initial segment.

### my_strpbrk

```c
char *my_strpbrk(const char *str1Add, const char *str2Add);
```

- Description: Searches `str1Add` for any character from `str2Add`.
- Parameters:
  - `str1Add`: A pointer to the null-terminated string to search in.
  - `str2Add`: A pointer to the null-terminated string containing characters to search for.
- Returns: A pointer to the first occurrence of any character from `str2Add` in `str1Add`, or `NULL` if not found.

### my_memset

```c
void *my_memset(void *strAdd, int targetChar, size_t numOfChar);
```

- Description: Sets the first `numOfChar` bytes of the memory pointed to by `strAdd` to the specified `targetChar`.
- Parameters:
  - `strAdd`: A pointer to the memory to be set.
  - `targetChar`: The character to set.
  - `numOfChar`: The number of bytes to set.
- Returns: A pointer to the original memory.

### my_memcmp

```c
int my_memcmp(const void *str1Add, const void *str2Add, size_t numOfChar);
```

- Description: Compares the first `numOfChar` bytes of two memory regions.
- Parameters:
  - `str1Add`: A pointer to the first memory region.
  - `str2Add`: A pointer to the second memory region.
  - `numOfChar`: The number of bytes to compare.
- Returns: An integer indicating the comparison result: 0 if equal, negative if `str1Add` is less than `str2Add`, and positive if `str1Add` is greater than `str2Add`.

### my_memcpy

```c
void *my_memcpy(void *destAdd, const void *srcAdd, size_t numOfChar);
```

- Description: Copies `numOfChar` bytes from the source memory region to the destination memory region.
- Parameters:
  - `destAdd`: A pointer to the destination memory region.
  - `srcAdd`: A pointer to the source memory region.
  - `numOfChar`: The number of bytes to copy.
- Returns: A pointer to the destination memory region (`destAdd`).

### my_memmove

```c
void *my_memmove(void *destAdd, const void *srcAdd, size_t numOfChar);
```

- Description: Safely copies `numOfChar` bytes from the source memory region to the destination memory region, even if the regions overlap.
- Parameters:
  - `destAdd`: A pointer to the destination memory region.
  - `srcAdd`: A pointer to the source memory region.
  - `numOfChar`: The number of bytes to copy.
- Returns: A pointer to

 the destination memory region (`destAdd`).

### my_memchr

```c
void *my_memchr(const void *strAdd, int wantedChar, size_t numOfChar);
```

- Description: Searches for the first occurrence of `wantedChar` in the memory region.
- Parameters:
  - `strAdd`: A pointer to the memory region.
  - `wantedChar`: The character to search for.
  - `numOfChar`: The number of bytes to search within.
- Returns: A pointer to the first occurrence of `wantedChar` in the memory region, or `NULL` if not found.

---

These custom functions provide basic string and memory manipulation capabilities. They are intended for educational purposes and may not be as efficient or robust as standard library functions.
```

Feel free to use this documentation as a reference for your custom C functions. You can further enhance it by providing more details, examples, and explanations as needed.