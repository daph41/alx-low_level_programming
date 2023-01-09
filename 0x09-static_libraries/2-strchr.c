#include "main.h"
#include <stdio.h>

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
		
	}
	if (c == *s)
		return (s);


	return (NULL);
}
