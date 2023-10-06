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
	int num = 48;

	while (num < 57)
	{
		putchar(num);
		putchar(', ');
		num += 1;
	}
	putchar(num);
	putchar('\n');
	return (0);
}
