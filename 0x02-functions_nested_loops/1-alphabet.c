#include <stdio.h>
#include "main.h"
#include "holberton.h"

/*
 *
 *  * File: 1-alphabet.c
 *
 *   * Auth: Daph moraa
 *
 *    */

void print_alphabet(void)
{		char letter;
	
		for (letter='a'; letter <='z'; letter++)
			putchar(letter);
		putchar ('\n');
	
}

