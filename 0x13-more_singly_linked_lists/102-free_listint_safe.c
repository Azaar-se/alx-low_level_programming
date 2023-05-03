#include "lists.h"

/**
 * free_listint_safe - This frees a linked list
 * @u: The pointer to the first node in the linked list
 *
 * Return: The No. of elements in the freed list
 */
size_t free_listint_safe(listint_t **u)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!u || !*u)
		return (0);

	while (*u)
	{
		diff = *u - (*u)->next;
		if (diff > 0)
		{
			temp = (*u)->next;
			free(*u);
			*u = temp;
			len++;
		}
		else
		{
			free(*u);
			*u = NULL;
			len++;
			break;
		}
	}

	*u = NULL;

	return (len);
}
