#include "lists.h"

/**
 * free_listint - This frees a linked list
 * @topp: listint_t lists to be freed
 */
void free_listint(listint_t *topp)
{
	listint_t *temp;

	while (topp)
	{
		temp = topp->next;
		free(topp);
		topp = temp;
	}
}
