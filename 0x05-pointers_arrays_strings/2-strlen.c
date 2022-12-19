#include "main.h"

/*counts no of characters*/

int _strlen(char *s)

{
	int c = 0;
	for (; *s != '\0'; s++)

	{
		c++;
	
	}

	return (c);
}
