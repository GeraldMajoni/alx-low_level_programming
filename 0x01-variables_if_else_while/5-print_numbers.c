#include <stdio.h>

/**
 * main - Entry to C
 * Loop to print 0-9
 * Return: (0) (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
