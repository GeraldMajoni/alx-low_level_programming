#include "main.h"

/**
 * _puts - entry in printing a string
 * @str: string to be printed
 * Return: Nil
 */

void _puts(char *str)
{
	if (str)
	{
		while (*str)
			_putchar(*str++);
	}
	_putchar('\n');
}
