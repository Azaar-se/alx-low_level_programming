#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @topp: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or if the list is empty, then return 0
 */
int pop_listint(listint_t **topp)
{
	listint_t *temp;
	int num;

	if (!topp || !*topp)
		return (0);

	num = (*topp)->n;
	temp = (*topp)->next;
	free(*topp);
	*topp = temp;

	return (num);
}
