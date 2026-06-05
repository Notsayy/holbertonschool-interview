# Linked List Palindrome

## Description

This project provides a function to check if a singly linked list of integers is a palindrome. A palindrome is a sequence that reads the same forwards and backwards. The implementation is designed for technical interview preparation and follows Holberton School's coding standards.

## Function Prototype

```
int is_palindrome(listint_t **head);
```

- `head`: Double pointer to the head of the singly linked list.
- **Return:**
  - `1` if the list is a palindrome
  - `0` if it is not a palindrome
  - An empty list is considered a palindrome

## Data Structures

The linked list uses the following structure (see `lists.h`):

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## Files

- `0-is_palindrome.c`: Contains the palindrome checking function.
- `lists.h`: Header file with the list structure and function prototypes.
- `linked_lists.c`: Helper functions to print, add, and free nodes in the list.
- `0-main.c`: Example main file to test the palindrome function.

## Compilation

Compile with:

```
gcc -Wall -Werror -Wextra -pedantic 0-main.c linked_lists.c 0-is_palindrome.c -o palindrome
```

## Example Usage

```
$ ./palindrome
1
17
972
50
98
98
50
972
17
1
Linked list is a palindrome
```

## Author

[Notsay](https://github.com/Notsayy)
