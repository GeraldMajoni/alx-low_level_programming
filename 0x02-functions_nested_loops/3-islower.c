#include "main.h"

/**
 * _islower - Entry into program
 * @c: character
 * Return: (1) (successful)
 */

int _islower(int c)
{
	if ('a' <= c <= 'z')
		return (1);
	else
		return (0);
}
