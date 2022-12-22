#include "main.h"

/**
 *
 *  * _strcat - a function that concatenates two strings.
 */

char *_strcat(char *dest, char *src)

{
	char *temp = dest;
	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
