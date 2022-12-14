/*
 *
 *  * File: 1-alphabet.c
 *
 *   * Auth: Daph moraa
 *
 *    */

#include<stdio.h>

void print_alphabet(void)
{	
	char letter;

	for (letter= 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar ('\n');

	return (0);

}
