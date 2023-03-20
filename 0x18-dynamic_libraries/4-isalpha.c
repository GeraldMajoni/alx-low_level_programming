#include "main.h"

/**
 * _isalpha - Entry into Program
 * @c: Character
 * Return: (1) (success)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 0 && c <= 9)
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
