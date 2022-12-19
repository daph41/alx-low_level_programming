#include "main.h"

void _puts(char *str)

{

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
