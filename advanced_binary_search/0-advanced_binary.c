#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints an array of integers within a given range
 * @array: Pointer to the first element of the array
 * @left: The starting index of the subarray to print
 * @right: The ending index of the subarray to print
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * recursive_binary - Searches recursively for the first occurrence of a value
 *                    in a sorted array of integers
 * @array: Pointer to the first element of the array
 * @left: The starting index of the subarray to search
 * @right: The ending index of the subarray to search
 * @value: The value to search for
 *
 * Return: The index of the first occurrence of value, or -1 if not found
 */
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array, left, right);

	if (left == right)
		return (array[left] == value ? (int)left : -1);

	mid = left + (right - left) / 2;

	if (array[mid] >= value)
	{
		if (array[mid] == value && (mid == left || array[mid - 1] != value))
			return (mid);
		return (recursive_binary(array, left, mid, value));
	}

	return (recursive_binary(array, mid + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   returning the index of the first occurrence
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located,
 *         or -1 if not present or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}

