#include "main.h"

char *_strcpy(char *dest, char *src)

{
	char *aux = dest;

	while (*src)

		*dest++ = *src++;

	return (aux);
}
