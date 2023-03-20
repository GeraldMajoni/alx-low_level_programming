#include "main.h"

/**
 * _isdigit - Program to check digit
 * @c: integer value
 * Return: 1 success 0 otherwise
 */

int _isdigit(int c)
{
	if  (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
