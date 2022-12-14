#include<stdio.h>
#include "main.h"


int main(void)
{	
	char word[9] = "-putchar";
	int i;

	for (i=0; i<9; i++)
		putchar(word[i]);

	putchar('\n');


	return(0);

}
