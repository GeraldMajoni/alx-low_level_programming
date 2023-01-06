#include "main.h"

/**
 * _isupper - Entry into program to find uppercase
 * print results
 * @c: integer input
 * Return: 1 (success) 0 otherwise
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
