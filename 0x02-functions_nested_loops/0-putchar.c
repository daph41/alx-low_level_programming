#include<stdio.h>
#include "main.h"


int main(void)
{	
	char word[8] = "-putchar";
	int i;

	for (i=0; i<8; i++)
		putchar(word[i]);

	putchar('\n');


	return(0);

}
