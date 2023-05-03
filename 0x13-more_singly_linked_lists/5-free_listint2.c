#include "lists.h"

/**
 * free_listint2 - This frees a linked list
 * @topp: The pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **topp)
{
	listint_t *temp;

	if (topp == NULL)
		return;

	while (*topp)
	{
		temp = (*topp)->next;
		free(*topp);
		*topp = temp;
	}

	*topp = NULL;
}
