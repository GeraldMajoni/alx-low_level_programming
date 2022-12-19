#include "main.h"

/**
 * rev_string - prints in reverse
 * @s: string
 * Return: Nil
 */

void rev_string(char *s)
{
	int l, i;
	char ch;

	for (l = 0; s[1] != '\0'; i++)
		;
	for (i = 0; i < l / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}
}
