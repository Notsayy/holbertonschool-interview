# Linear Skip List Search

## Description

This project implements a linear search algorithm in a sorted **Skip List** of integers. A skip list is an optimization of a singly linked list that incorporates an "express lane" to reduce search time complexity. Express lane nodes are placed at indices that are multiples of the square root of the size of the list.

## Data Structure

```c
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;
```

## Function Prototype

```c
skiplist_t *linear_skip(skiplist_t *list, int value);
```

- **`list`**: Pointer to the head of the skip list to search in.
- **`value`**: Value to search for.
- **Return Value**: Pointer to the first node where `value` is located, or `NULL` if `value` is not present or if `list` is `NULL`.

## Requirements & Environment

- **OS**: Ubuntu 14.04 LTS
- **Compiler**: `gcc 4.8.4` using flags `-Wall -Werror -Wextra -pedantic`
- **Style**: Code adheres to the **Betty** style rules checked with `betty-style.pl` and `betty-doc.pl`.
- **Header**: All function prototypes and data structure definitions are included in [search.h](file:///home/jules/holbertonschool-interview/linear_skip/search.h).

## Files

| File | Description |
| --- | --- |
| [search.h](file:///home/jules/holbertonschool-interview/linear_skip/search.h) | Header file containing structure definition and prototypes |
| [0-linear_skip.c](file:///home/jules/holbertonschool-interview/linear_skip/0-linear_skip.c) | Implementation of the `linear_skip` function |
| `README.md` | Project documentation |

## Compilation & Example Usage

```bash
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear_skip.c skiplist/*.c -lm -o 0-linear_skip
./0-linear_skip
```

### Example Output

```text
List :
Index[0] = [0]
Index[1] = [1]
...
Index[15] = [99]

Express lane :
Index[0] = [0]
Index[4] = [4]
Index[8] = [18]
Index[12] = [61]

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value found between indexes [8] and [12]
Value checked at index [8] = [18]
Value checked at index [9] = [19]
Value checked at index [10] = [23]
Value checked at index [11] = [53]
Found 53 at index: 11
```
