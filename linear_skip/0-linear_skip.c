#include "search.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 * or NULL if value is not present or list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *express;

	if (list == NULL)
		return (NULL);

	node = list;
	for (express = list->express; express != NULL; express = express->express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			express->index, express->n);

		if (express->n >= value)
			break;

		node = express;
	}

	if (express == NULL)
	{
		for (express = node; express->next != NULL; express = express->next)
			;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		node->index, express->index);

	for (; node != NULL && node->index <= express->index; node = node->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			node->index, node->n);

		if (node->n == value)
			return (node);
	}

	return (NULL);
}
