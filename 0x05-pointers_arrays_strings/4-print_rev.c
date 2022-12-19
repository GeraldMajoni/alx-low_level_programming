#include "main.h"

/**
 * print_rev - Entry into proram to reverse string
 * @s: string to be reversed
 * Return: Nil
 */

void print_rev(char *s)
{
	int i, len;

	i = 0;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
