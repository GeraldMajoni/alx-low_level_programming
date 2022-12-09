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
		putchar(i);
		if (i == 57)
		{
			i = i + 1;
			continue;
		}
	putchar(c);
	putchar(s);
	i++;
	} while (i < 58);
	putchar('\n');
	return (0);
}
