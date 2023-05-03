#include "lists.h"

/**
 * get_nodeint_at_index - This returns node at a certain index in linked list
 * @fnode: The first node in the linked list
 * @tail: The index of the node to return
 *
 * Return: The pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *fnode, unsigned int tail)
{
	unsigned int z = 0;
	listint_t *temp = fnode;

	while (temp && z < tail)
	{
		temp = temp->next;
		z++;
	}

	return (temp ? temp : NULL);
}
