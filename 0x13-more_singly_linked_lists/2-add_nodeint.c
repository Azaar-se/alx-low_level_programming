include "lists.h"
/**
 * add_nodeint - This adds a new node at the beginning of a linked list
 * @fnode: The pointer to the first node in the list
 * @q: The data to insert in that new node
 *
 * Return: The pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **fnode, const int q)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->q = q;
	new->next = *fnode;
	*fnode = new;

	return (new);
}
