#include "main.h"
#include <stdio.h>


void print_array(int *a, int n)

{
	int i = 0;

	for (; i < n; i++)

	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
