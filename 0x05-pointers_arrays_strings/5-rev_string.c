#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char *tmp = malloc(sizeof(s));

	for (i = 0; s[i] != 0; i++)
	{
		tmp[i] = s[i];
	}
	for (j = 0; i >= 0; j++, i--)
	{
		s[j] = tmp[i];
	}
}
