#include "lists.h"
#include <stdio.h>

/* Write a function that prints all the elements of a list */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	while(h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;

	}

	return (nodes);


}
