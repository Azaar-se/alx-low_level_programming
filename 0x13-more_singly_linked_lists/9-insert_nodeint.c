#include "lists.h"

/**
 * insert_nodeint_at_index - This inserts a new node in a linked list,
 * at a given position
 * @fnode: The pointer to the first node in the list
 * @ndx: index where the new node is added
 * @d: The data to insert in the new node
 *
 * Return: The pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **fnode, unsigned int ndx, int d)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *fnode;

	new = malloc(sizeof(listint_t));
	if (!new || !fnode)
		return (NULL);

	new->d = d;
	new->next = NULL;

	if (ndx == 0)
	{
		new->next = *fnode;
		*fnode = new;
		return (new);
	}

	for (i = 0; temp && i < ndx; i++)
	{
		if (i == ndx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

