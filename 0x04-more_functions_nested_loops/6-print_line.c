#include "main.h"

/**
 * print_line - entry to program
 * print lines
 * @n: integer parameter
 * Return: nil success
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
