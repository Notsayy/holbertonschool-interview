#include "search.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located,
 * or NULL if value is not present or list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *express;

	if (list == NULL)
		return (NULL);

	node = list;
	express = node->express;

	while (express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       express->index, express->n);

		if (express->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       node->index, express->index);
			break;
		}

		node = express;
		express = express->express;
	}

	if (express == NULL)
	{
		express = node;
		while (express->next != NULL)
			express = express->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
		       node->index, express->index);
	}

	while (node != NULL && node->index <= express->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       node->index, node->n);

		if (node->n == value)
			return (node);

		node = node->next;
	}

	return (NULL);
}
