
#include <stddef.h>
#include "lists.h"

/**
 * is_palindrome - Checks if a singly linked list is a palindrome
 * @head: Double pointer to the head of the list
 *
 * Return: 1 if palindrome, 0 otherwise
 * An empty list is considered a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow, *fast, *prev, *tmp, *second, *first;
	if (head == NULL || *head == NULL)
		return (1);

	slow = *head;
	fast = *head;
	prev = NULL;

	/* Find the middle (slow) and reverse first half */
	while (fast && fast->next)
	{
		fast = fast->next->next;
		tmp = slow->next;
		slow->next = prev;
		prev = slow;
		slow = tmp;
	}

	/* For odd number of nodes, skip the middle node */
	if (fast)
		slow = slow->next;

	first = prev;
	second = slow;

	/* Compare reversed first half and second half */
	while (first && second)
	{
		if (first->n != second->n)
			return (0);
		first = first->next;
		second = second->next;
	}

	return (1);
}
