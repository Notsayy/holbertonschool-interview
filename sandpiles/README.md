# Sandpiles Sum

## Description

This project implements the sum of two sandpiles, following the Abelian sandpile model. A sandpile is represented as a 3x3 grid of integers, where each cell contains a number of grains. The main function, `sandpiles_sum`, computes the sum of two stable sandpiles and stabilizes the result according to the following rules:

- A sandpile is **stable** if no cell contains more than 3 grains.
- If any cell contains more than 3 grains, it "topples": 4 grains are removed from that cell, and 1 grain is added to each of its direct neighbors (up, down, left, right).
- This process repeats until the sandpile is stable.

## Function Prototype

```
void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
```

- `grid1`: The first 3x3 sandpile grid (will contain the result).
- `grid2`: The second 3x3 sandpile grid.

## Requirements

- Both `grid1` and `grid2` are initially stable.
- The result (in `grid1`) must be stable after the function completes.
- Before each toppling round, if the grid is unstable, it must be printed in a specific format (see below).
- No dynamic memory allocation is allowed.

## Output Format

When the grid is unstable, print it as follows:

```
=
X X X
X X X
X X X
```

Where `X` are the values of the grid cells.

## Example

Given the following main function:

```c
int grid1[3][3] = {
    {3, 3, 3},
    {3, 3, 3},
    {3, 3, 3}
};
int grid2[3][3] = {
    {1, 3, 1},
    {3, 3, 3},
    {1, 3, 1}
};

sandpiles_sum(grid1, grid2);
```

The output will be:

```
=
4 6 4
6 6 6
4 6 4
=
2 5 2
5 6 5
2 5 2
=
4 2 4
2 6 2
4 2 4
=
0 5 0
5 2 5
0 5 0
=
2 1 2
1 6 1
2 1 2
=
2 2 2
2 2 2
2 2 2
```

## Compilation

Compile with:

```
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-sandpiles.c -o 0-sandpiles
```

## Files

- `0-sandpiles.c`: Implementation of the sandpile sum and stabilization.
- `sandpiles.h`: Header file with function prototypes.
- `0-main.c`, `1-main.c`: Example main files for testing.

## Author

[Notsay](https://github.com/Notsayy)
