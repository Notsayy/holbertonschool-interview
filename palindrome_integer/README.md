
# 0x01. Palindrome unsigned integer

This project provides a C function to check whether a given unsigned integer is a palindrome.

## Description
A palindrome is a number that reads the same forwards and backwards. This project implements a function to check if an unsigned long integer is a palindrome, without using dynamic memory allocation or converting the number to a string.

## Requirements
- All files are compiled on **Ubuntu 14.04 LTS** with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra -pedantic`
- Code follows the **Betty style**
- No global variables
- No more than 5 functions per file
- All function prototypes are in `palindrome.h` (with include guards)
- No dynamic memory allocation (no `malloc`, `calloc`, etc.)
- All files end with a new line

## Prototype
```
int is_palindrome(unsigned long n);
```
- Returns `1` if `n` is a palindrome, `0` otherwise.

## Usage
Example main file:
```c
#include <stdlib.h>
#include <stdio.h>
#include "palindrome.h"

int main(int ac, char **av)
{
	unsigned long n;
	int ret;

	if (ac < 2)
	{
		fprintf(stderr, "Usage: %s arg\n", av[0]);
		return (EXIT_FAILURE);
	}

	n = (unsigned long)(atol(av[1]));
	ret = is_palindrome(n);

	printf("%lu is ", n);
	if (ret == 0)
		printf("not ");
	printf("a palindrome.\n");

	return (EXIT_SUCCESS);
}
```

### Compilation
```
gcc -Wall -Wextra -Werror -pedantic -g3 -o palindrome 0-main.c 0-is_palindrome.c
```

### Example Output
```
$ ./palindrome 1
1 is a palindrome.
$ ./palindrome 11
11 is a palindrome.
$ ./palindrome 112
112 is not a palindrome.
$ ./palindrome 121
121 is a palindrome.
$ ./palindrome 12345678987654321
12345678987654321 is a palindrome.
$ ./palindrome 123456789987654321
123456789987654321 is a palindrome.
$ ./palindrome 1234567898654321
1234567898654321 is not a palindrome.
```

## Files
- `0-is_palindrome.c` - Implementation of `is_palindrome`
- `palindrome.h` - Header file with function prototype and include guard
- `README.md` - Project documentation

## Author
[Notsayy](https://github.com/Notsayy)