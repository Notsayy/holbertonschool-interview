#!/usr/bin/python3
"""
Module to solve the N-Queens puzzle.
"""
import sys


def is_safe(row, col, solution):
    """
    Check if a queen can be placed at (row, col).
    """
    for r, c in solution:
        if c == col or abs(r - row) == abs(c - col):
            return False
    return True


def solve_nqueens(n, row, solution):
    """
    Backtracking solver for N-Queens problem.
    """
    if row == n:
        print(solution)
        return

    for col in range(n):
        if is_safe(row, col, solution):
            solution.append([row, col])
            solve_nqueens(n, row + 1, solution)
            solution.pop()


def main():
    """
    Main function to parse arguments and initiate N-Queens solver.
    """
    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        sys.exit(1)

    try:
        n = int(sys.argv[1])
    except ValueError:
        print("N must be a number")
        sys.exit(1)

    if n < 4:
        print("N must be at least 4")
        sys.exit(1)

    solve_nqueens(n, 0, [])


if __name__ == "__main__":
    main()
