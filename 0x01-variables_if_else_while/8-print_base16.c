#include <stdio.h>

/**
 * main -Entry into C
 * Loops to print
 * Return: (0)
 * exit
 */

int main(void)
{
	int i = 48, j = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j < 103)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
