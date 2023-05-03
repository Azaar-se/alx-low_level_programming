#include "lists.h"

/**
 * sum_listint - This adds up all the data in a listint_t list
 * @fnode: The first node in the linked list
 *
 * Return: The resulting sum
 */
int sum_listint(listint_t *fnode)
{
	int add = 0;
	listint_t *temp = fnode;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}

	return (add);
}
