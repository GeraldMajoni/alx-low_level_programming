#include <stdio.h>

/**
 * main - Entry into C
 * Loop to print
 * Return: (0) (success)
 * exit
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		putchar('\n');
		i++;
	}
	return (0);
}
