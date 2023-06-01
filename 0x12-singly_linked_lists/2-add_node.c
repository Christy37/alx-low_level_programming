#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - adds a node
 * @head: is the head node
 * @str: string
 * Return: a new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int a, count = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		count++;

	new->len = a;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
