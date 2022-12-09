#include <stdio.h>

/**
 * main - Entry into C
 * Loop to print
 * Return: (0) (success)
 * exit
 */

int main(void)
{
	int j = 122;

	while (j > 96)
	{
		putchar(j);
		j--;
	}
	putchar('\n');
	return (0);
}
