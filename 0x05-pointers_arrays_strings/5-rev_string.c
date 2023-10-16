#include "main.h"
#include <stdlib.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0; s[i] != 0; i++)
	{}
	for (j = 0, i--; i >= 0; j++, i--)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
