#include "main.h"

/**
 * print_alphabet_x10 - Entry into code
 * print alphabet
 * Return: (0) (success)
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
	}
	_putchar('\n');
}


