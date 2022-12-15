#include "main.h"

/**
 * print_line - entry to program
 * print lines
 * @n: integer parameter
 * Return: 0 success
 */

void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');

	return (0);
}
