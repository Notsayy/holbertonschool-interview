# Heap Sort

This project implements the Heap sort algorithm in C using the sift-down approach.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on Ubuntu 14.04 LTS with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra -pedantic`
- All files end with a new line
- Code follows the Betty style (checked using `betty-style.pl` and `betty-doc.pl`)
- No global variables
- No more than 5 functions per file
- No standard library functions (such as `printf`, `puts`, etc.) allowed, except for `print_array` provided for testing
- All prototypes are included in `sort.h`
- Header files are include guarded

## Files

- `0-heap_sort.c`: C function that sorts an array of integers in ascending order using Heap sort (sift-down algorithm)
- `0-O`: Big O notations of the time complexity of the Heap sort algorithm (best, average, worst case)
- `sort.h`: Header file containing function prototypes

## Tasks

### 0. Heap sort

Write a function that sorts an array of integers in ascending order using the Heap sort algorithm.

- Prototype: `void heap_sort(int *array, size_t size);`
- Sift-down heap sort algorithm implementation
- The array is printed each time two elements are swapped

### Time Complexity (`0-O`)

- Best case: `O(nlog(n))`
- Average case: `O(nlog(n))`
- Worst case: `O(nlog(n))`
