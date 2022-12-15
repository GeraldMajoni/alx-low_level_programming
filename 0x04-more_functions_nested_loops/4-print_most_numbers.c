#include "main.h"

/**
 * print_most_numbers - Entry into program
 * print numbers except 2 and 4
 * Return: nil
 */

void print_most_numbers(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i++;
			continue;
		}
		else
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
