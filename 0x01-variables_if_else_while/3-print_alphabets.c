#include <stdio.h>

/**
 * main - Entry mode
 * Loops to print alphabet
 * Return: (0) (success)
 */
int main(void)
{
	int i = 97, j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
