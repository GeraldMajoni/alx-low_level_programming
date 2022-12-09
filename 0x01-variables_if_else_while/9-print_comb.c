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

	do {
		if (i == 57)
		{
			putchar(i);
			i = i + 1;
			continue;
		}
	putchar(i);
	putchar(c);
	putchar(s);
	} while (i < 58);
	return (0);
}
