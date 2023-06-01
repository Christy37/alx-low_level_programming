#include "lists.h"
/**
* list_len - a function that returns the number
*  of elements in a linked list_t list
* @m: input
* Return: 0
*/
size_t list_len(const list_t *m)
{
	int len = 0;

	if (m == NULL)
		return (0);

	while (m != NULL)
	{
		len++;
		m = m->next;
	}
	return (len);
}
