#include "dog.h"

#include <stdio.h>

#include <stdlib.h>

void free_dog(dog_t *x)
{
	if (x != NULL)
	{
		free(x->name);
		free(x->owner);
		free(x);
	}
}
