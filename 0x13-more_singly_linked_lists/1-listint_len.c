#include "lists.h"
#include <stdio.h>

/*a function that returns number of elements in a list*/

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
