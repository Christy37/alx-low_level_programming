#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: input
 * @str: input
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int s, f = 0;
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (s = 0; str[s] != '\0'; s++)
		f++;

	new->len = s;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
