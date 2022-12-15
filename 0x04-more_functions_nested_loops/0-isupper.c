#include "main.h"

/**
 * _isupper - Entry into program to find uppercase
 * print results
 * @c: integer input
 * Return: (1) (success)
 */

int _isupper(int c);
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
