#include "lists.h"

/**
 * listint_len - This returns the No. of elements in a linked lists
 * @z: The linked list of type listint_t to traverse
 *
 * Return: The No. of nodes
 */
size_t listint_len(const listint_t *z)
{
	size_t num = 0;

	while (z)
	{
		num++;
		z = z->next;
	}

	return (num);
}
