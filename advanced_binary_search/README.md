# Advanced Binary Search

A recursive implementation of an advanced binary search algorithm in C that finds the first occurrence of a value in a sorted array of integers.

## Description

Standard binary search algorithms locate an element in a sorted array in $O(\log n)$ time, but when duplicate values are present, they do not guarantee returning the first (lowest) index of the matching value.

This project implements an **Advanced Binary Search** that:
- Recursively divides the array to locate the target value
- Guarantees returning the index of the **first occurrence** when duplicate values exist
- Prints the subarray currently being searched each time the array is split
- Uses recursion throughout, permitting only a single loop across the entire implementation (used solely for printing the array)

## Files

| File | Description |
|------|-------------|
| `0-advanced_binary.c` | Implementation of `advanced_binary` and helper functions |
| `search_algos.h` | Header file containing function prototypes |
| `README.md` | Project documentation |

## Prototype

```c
int advanced_binary(int *array, size_t size, int value);
```

### Parameters

- `array`: Pointer to the first element of the array to search in
- `size`: Number of elements in the array
- `value`: Value to search for

### Return Value

- Returns the index where `value` is located (first occurrence if duplicates exist)
- Returns `-1` if `value` is not present in `array` or if `array` is `NULL`

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 14.04 LTS with `gcc 4.8.4` using flags `-Wall -Werror -Wextra -pedantic`
- All files end with a new line
- Betty style compliant (checked with `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- Maximum of 5 functions per file
- Only standard library function allowed: `printf`
- Include-guarded header file: `search_algos.h`

## Compilation & Usage

Compile your files using:

```bash
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-advanced_binary.c -o 0-advanced_binary
```

### Example

```c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 5, 5, 6, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
    printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
    printf("Found %d at index: %d\n", 999, advanced_binary(array, size, 999));
    return (EXIT_SUCCESS);
}
```

Output:

```
Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 6, 6, 7, 8, 9
Searching in array: 8, 9
Found 8 at index: 8

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 0, 1, 2, 5, 5
Searching in array: 5, 5
Found 5 at index: 3

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 6, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
```

## Repository

- **GitHub repository:** `holbertonschool-interview`
- **Directory:** `advanced_binary_search`
- **File:** `0-advanced_binary.c`, `search_algos.h`, `README.md`

