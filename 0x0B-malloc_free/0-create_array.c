#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size > 0)
	{
		p = malloc(size * sizeof(char));
		if (p == NULL)
			return (NULL);

	}

	else
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
