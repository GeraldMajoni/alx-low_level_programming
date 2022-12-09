#include <stdio.h>

/**
 * main - Entry into C
 * Loop to print
 * Return: (0) (success)
 * exit
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
