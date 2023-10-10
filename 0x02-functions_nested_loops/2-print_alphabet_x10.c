#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
	int i;
	for(i =0;i<10;i++)
	{
		char chr = 'a';

		while (chr <= 'z')
		{
			_putchar(chr);
			chr++;

		}
		_putchar('\n');
	}
}
