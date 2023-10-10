#include "main.h"

/**
 * print_alphabet_x10 - print the alpabet 10 times
 * Return:0
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
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
