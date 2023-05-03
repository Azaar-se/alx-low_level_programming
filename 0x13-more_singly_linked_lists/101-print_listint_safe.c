#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - This counts the No. of unique nodes
 * in a looped listint_t linked list.
 * @topp: This is a pointer to the head of the listint_t to check.
 *
 * Return: 0 if the list is not looped
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *topp)
{
	const listint_t *avu, *cat;
	size_t nodes = 1;

	if (topp == NULL || topp->next == NULL)
		return (0);

	avu = topp->next;
	cat = (topp->next)->next;

	while (cat)
	{
		if (avu == cat)
		{
			avu = topp;
			while (avu != cat)
			{
				nodes++;
				avu = avu->next;
				cat = cat->next;
			}

			avu = avu->next;
			while (avu != cat)
			{
				nodes++;
				avu = avu->next;
			}

			return (nodes);
		}

		avu = avu->next;
		cat = (cat->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - This prints a listint_t list safely.
 * @topp: This is pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *topp)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(topp);

	if (nodes == 0)
	{
		for (; topp != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)topp, topp->n);
			topp = topp->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)topp, topp->n);
			topp = topp->next;
		}

		printf("-> [%p] %d\n", (void *)topp, topp->n);
	}

	return (nodes);
}
