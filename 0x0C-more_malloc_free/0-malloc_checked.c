#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *g = malloc(b);
	if (g == NULL)
	{
		exit(98);
	}

	return (g);
}
