#include <stdlib.h>

#include <stdio.h>

#include "lists.h"

/* function that prints allelements of link list
 *
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h ->next;
		count++;
	}

	return (count);
}

