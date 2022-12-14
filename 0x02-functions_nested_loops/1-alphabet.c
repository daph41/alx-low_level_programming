#include <stdio.h>

/*
 *
 *  * File: 1-alphabet.c
 *
 *   * Auth: Daph moraa
 *
 *    */

int main


{
	char letter;

	void print_alphabet(void)
	{	
		for (letter='a'; letter <='z'; letter++)
			putchar(letter);
		putchar ('\n');
	
	}
	
	print_alphabet();
	return (0);

}
