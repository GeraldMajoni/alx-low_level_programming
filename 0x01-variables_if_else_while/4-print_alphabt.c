#include <stdio.h>

/**
 * main - Entry into C
 * Loop to print alphabet
 * removing eq
 * Return: (0) (success)
 * exit
 */
int main(void)
{
	int i = 97;

	do {
		if (i == 'e' || i == 'q')
		{
			i = i + 1;
			continue;
		}
		putchar(i);
		i++;
	} while (i < 123);
	putchar('\n');
	return (0);
}
