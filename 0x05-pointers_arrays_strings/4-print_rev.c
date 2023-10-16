#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int length = _strlen(s);
	int i;

	for (i = length; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
