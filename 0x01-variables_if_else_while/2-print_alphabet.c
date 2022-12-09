#include <stdio.h>

/**
 * main - Entry into program
 * Return: (0) (success)
 * printing ASCII
 * exit
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar ('\n');
	return (0);
}
