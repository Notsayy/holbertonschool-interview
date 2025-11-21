#!/usr/bin/python3
"""
Module containing minOperations function to calculate the minimum
number of operations to reach n characters using Copy All and Paste
"""


def minOperations(n):
    """
    Calculates the fewest number of operations needed to result
    in exactly n H characters in a file

    Args:
        n: target number of H characters

    Returns:
        Integer representing minimum number of operations
        Returns 0 if n is impossible to achieve
    """
    if n <= 1:
        return 0

    operations = 0
    divisor = 2
    while divisor * divisor <= n:
        while n % divisor == 0:
            operations += divisor
            n //= divisor
        divisor += 1
    if n > 1:
        operations += n

    return operations