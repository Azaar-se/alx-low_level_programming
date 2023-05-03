#include "lists.h"

/**
 * add_nodeint_end - This adds a node at the end of a linked list
 * @head: The pointer to the first element in the list
 * @v: The data to insert in the new element
 *
 * Return: The pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int v)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->v = v;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
