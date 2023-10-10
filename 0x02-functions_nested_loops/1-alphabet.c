#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		_putchar(chr);
		chr++;

	}
	_putchar('\n');

}
