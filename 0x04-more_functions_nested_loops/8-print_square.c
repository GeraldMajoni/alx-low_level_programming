#include "main.h"

/**
 * print_square - entry into program
 * @size: integer size
 * Return: nil
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			if (i == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
