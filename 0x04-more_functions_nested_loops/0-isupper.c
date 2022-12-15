#include "main.h"

/**
 * _isupper - Entry into program to find uppercase
 * print results
 * @c: integer input
 * Return: (1) (success)
 */

int _isupper(int c);
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar('1');
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar('0');
		return (0);
	}
}
