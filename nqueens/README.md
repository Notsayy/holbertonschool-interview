# N Queens

## Description

The **N Queens puzzle** is a classic computer science and mathematical problem. The challenge is to place $N$ non-attacking queens on an $N \times N$ chessboard such that no two queens threaten each other. This means no two queens can share the same row, column, or diagonal.

This project provides a Python command-line utility (`0-nqueens.py`) that uses **backtracking** to find and display all possible solutions for any given board size $N \ge 4$.

## Requirements

- **Environment:** Ubuntu / Linux (Python 3.x)
- **Allowed Modules:** `sys` module only
- **Code Style:** PEP 8 compliant

## Usage

```bash
./0-nqueens.py N
```

Where `N` is an integer representing the size of the $N \times N$ chessboard.

### Error Handling

The program strictly validates input arguments as follows:

| Condition | Error Message | Exit Code |
| --- | --- | --- |
| Wrong number of arguments | `Usage: nqueens N` | `1` |
| `N` is not an integer | `N must be a number` | `1` |
| `N` is smaller than `4` | `N must be at least 4` | `1` |

## Output Format

Solutions are printed one per line in the format of a list of $[row, col]$ positions for each queen.

### Examples

#### 1. Solving for $N = 4$

```bash
$ ./0-nqueens.py 4
[[0, 1], [1, 3], [2, 0], [3, 2]]
[[0, 2], [1, 0], [2, 3], [3, 1]]
```

#### 2. Solving for $N = 6$

```bash
$ ./0-nqueens.py 6
[[0, 1], [1, 3], [2, 5], [3, 0], [4, 2], [5, 4]]
[[0, 2], [1, 5], [2, 1], [3, 4], [4, 0], [5, 3]]
[[0, 3], [1, 0], [2, 4], [3, 1], [4, 5], [5, 2]]
[[0, 4], [1, 2], [2, 0], [3, 5], [4, 3], [5, 1]]
```

## How It Works

The program employs a **Recursive Backtracking Algorithm**:

1. **Row-by-Row Placement:** Places queens row by row starting from `row 0` up to `row N - 1`.
2. **Safety Check:** For each column candidate in the current row, it verifies:
   - No queen already exists in the same column.
   - No queen already exists on the major or minor diagonals ($|row_1 - row_2| = |col_1 - col_2|$).
3. **Backtrack & Recursion:**
   - If a valid position is found, the queen is placed and the algorithm recurses to the next row.
   - If no valid position exists in the current row or after exploring a path, it backtracks by removing the last placed queen and trying the next column.
4. **Base Case:** When `row == N`, a full valid placement has been found, and the solution is printed.

## Author

[Notsayy](https://github.com/notsayy)
