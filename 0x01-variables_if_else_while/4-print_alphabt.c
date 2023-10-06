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
        char letter = 'a';

        while (letter != ('z' + 1))
        {
                if (letter == 'q' || letter == 'e')
                {
                    letter += 1;
                    continue;
                }
                putchar(letter);
                letter += 1;
        }
        putchar('\n');
        return (0);
}
