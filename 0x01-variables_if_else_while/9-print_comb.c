#include <stdio.h>

/**
 * main -Entry level
 * Loops to print
 * Return: (0) (success)
 * exit
 */

int main(void)
{
	int i = 48, c = 44, s = 32;

	while (i < 58)
	{
		putchar(i);
		putchar(c);
		putchar(s);
	}
	putchar('\n');
	return (0);
}
