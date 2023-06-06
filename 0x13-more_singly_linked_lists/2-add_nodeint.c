#include "lists.h"
/**
 * add_nodeint - adds a node
 * @head: is the head node
 * @m: a variable
 * Return: a new node
 */
listint_t *add_nodeint(listint_t **head, const int m)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->m = m;
	new->next = *head;
	*head = new;

	return (new);
}
