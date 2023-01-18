#include "dog.h"

#include <stdio.h>

#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x;
	x = malloc(sizeof(dog_t));
	if (x == NULL)
		return (NULL);

	x->name = name;
	x->age = age;
	x->owner = owner;

	return (x);

}


