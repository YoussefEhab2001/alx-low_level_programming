#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr = '0';

	while (chr < ('9' + 1))
	{
		putchar(chr);
		chr += 1;
	}
	chr = 'a';
	while (chr < ('f' + 1))
	{
		putchar(chr);
		chr += 1;
	}
	putchar('\n');
	return (0);
}
