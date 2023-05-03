#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @fnode: The pointer to the first node in the list
 *
 * Return: The pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **fnode)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*fnode)
	{
		next = (*fnode)->next;
		(*fnode)->next = prev;
		prev = *fnode;
		*fnode = next;
	}

	*fnode = prev;

	return (*fnode);
}
