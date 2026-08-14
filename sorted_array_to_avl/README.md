# 0x1D. C - Binary trees: 0. AVL - From sorted array

## Description
This project contains a C function that builds an AVL tree from a sorted array.

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on Ubuntu 14.04 LTS using `gcc 4.8.4` with flags `-Wall -Werror -Wextra -pedantic`
- All files end with a new line
- Betty style check using `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- No more than 5 functions per file (maximum 3 functions in `0-sorted_array_to_avl.c`)
- Header file `binary_trees.h` is include-guarded

## Data Structures
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s avl_t;
```

## Tasks

### 0. AVL - From sorted array
Write a function that builds an AVL tree from an array.

- **Prototype**: `avl_t *sorted_array_to_avl(int *array, size_t size);`
- **Return**: Pointer to the root node of the created AVL tree, or `NULL` on failure
- **Constraints**:
  - `array` is a pointer to the first element of the array to be converted
  - `size` is the number of elements in the array
  - Assumes no duplicate values in the array
  - No rotations are allowed
  - Maximum 3 functions in `0-sorted_array_to_avl.c`

## File Overview
- `binary_trees.h`: Header file containing data structure definitions and function prototypes.
- `0-sorted_array_to_avl.c`: Implementation of the function to convert a sorted array into an AVL tree.
- `README.md`: Project description and documentation.

## Usage
To test the implementation with a `0-main.c` file:

```sh
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-sorted_array_to_avl.c -o 0-sorted_array_to_avl
./0-sorted_array_to_avl
```
