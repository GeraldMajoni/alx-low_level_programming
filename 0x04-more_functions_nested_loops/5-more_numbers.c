#include "main.h"

/**
 * more_numbers - entry into program
 *
 * Return: nil value
 */

void more_numbers(void)
{
	int number, counter;

	for (counter = 0; counter < 10, counter++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
