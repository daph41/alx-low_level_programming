#include <stdlib.h>
#include "dog.h"

void init_dog(struct dog *x, char *name, float age, char *owner)
{
	if (x)
	{
		x->name = name;
		x->age = age;
		x->owner = owner;

	}

	else
	{
		return;
	}
}
