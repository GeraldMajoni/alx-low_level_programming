#include "main.h"

/**
 * print_numbers - Entry into program
 *
 * Return: nil success
 */

void print_numbers(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
