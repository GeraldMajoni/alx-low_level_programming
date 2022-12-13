#include "main.h"

/**
 * _islower - Entry into program
 * @c: character
 * Return: (1) (successful)
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
