# Linked List Cycle

## Description

This project is part of the Holberton School technical interview preparation series. The goal is to implement a function in C that checks if a singly linked list contains a cycle.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on Ubuntu 14.04 LTS
- Compilation flags: `-Wall -Werror -Wextra -pedantic`
- Code style: Betty (checked with `betty-style.pl` and `betty-doc.pl`)
- No global variables
- Maximum 5 functions per file
- All function prototypes must be in `lists.h`
- Header files must be include guarded
- Only allowed functions: `write`, `printf`, `putchar`, `puts`, `malloc`, `free`

## Files

- `lists.h`: Header file containing the definition of the singly linked list and function prototypes.
- `0-check_cycle.c`: Contains the function to check for a cycle in a linked list.

## Function

### Prototype

```c
int check_cycle(listint_t *list);
```

- Returns `0` if there is no cycle, `1` if there is a cycle.

## Usage

Example usage (see `0-main.c`):

```c
if (check_cycle(head) == 0)
    printf("Linked list has no cycle\n");
else if (check_cycle(head) == 1)
    printf("Linked list has a cycle\n");
```

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-check_cycle.c 0-linked_lists.c -o cycle
```

## Example Output

```
1024
402
98
4
3
2
1
0
Linked list has no cycle
Linked list has a cycle
```

## Repository Structure

- GitHub repository: `holbertonschool-interview`
- Directory: `linked_list_cycle`
- Files: `0-check_cycle.c`, `lists.h`

## Author

[Notsayy](https://github.com/Notsayy)