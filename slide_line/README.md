# Slide Line — 2048 Mechanics

Implementation of the core sliding and merging mechanic from the [2048 game](https://gabrielecirulli.github.io/2048/) on a single horizontal line, written in C.

## Description

Given an array of integers, the function slides and merges its values to the left or to the right, following the rules of 2048:

- All non-zero values are compacted toward the chosen direction
- Two identical adjacent values (or separated only by zeros) are merged into their sum
- Each tile can only be merged once per slide
- Zeros fill the emptied positions

## Files

| File | Description |
|------|-------------|
| `0-slide_line.c` | Implementation of `slide_line` |
| `slide_line.h` | Header file — function prototype and macros |

## Prototype

```c
int slide_line(int *line, size_t size, int direction);
```

### Parameters

- `line` — pointer to the array of integers to slide and merge
- `size` — number of elements in `line`
- `direction` — `SLIDE_LEFT` or `SLIDE_RIGHT` (defined in `slide_line.h`)

### Return value

- `1` on success
- `0` on failure (invalid direction)

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -o 0-slide_line 0-main.c 0-slide_line.c
```

> Compiled and tested on Ubuntu 14.04 LTS with gcc 4.8.4.

## Examples

```bash
$ ./0-slide_line L 2 2 0 0
Line: 2, 2, 0, 0
Slide to the left
Line: 4, 0, 0, 0

$ ./0-slide_line L 2 2 0 0 0 0 0 2 0 0 0 2 0 4
Line: 2, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 4
Slide to the left
Line: 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

$ ./0-slide_line R 2 2 2 2
Line: 2, 2, 2, 2
Slide to the right
Line: 0, 0, 4, 4

$ ./0-slide_line R 2 2 2 2 2
Line: 2, 2, 2, 2, 2
Slide to the right
Line: 0, 0, 2, 4, 4

$ ./0-slide_line R 4 4 8 16
Line: 4, 4, 8, 16
Slide to the right
Line: 0, 8, 8, 16
```

## Algorithm

The function runs **3 passes** in the chosen direction — no dynamic memory allocation is used:

1. **Compact** — shift all non-zero values toward the target direction, filling the opposite side with zeros
2. **Merge** — walk through the compacted values and double any value that equals its neighbor in the slide direction; a `last_merged` flag prevents a tile from being merged twice in the same move
3. **Compact again** — re-pack after merges, as merging leaves zeros between values

## Constraints

- No dynamic memory allocation (`malloc`, `calloc`, etc.)
- No global variables
- Betty coding style enforced
- Maximum 5 functions per file

## Repository

- **GitHub:** `holbertonschool-interview`
- **Directory:** `slide_line`