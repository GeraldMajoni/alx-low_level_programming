#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Compute the last digit
 * @n: value
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	printf("%d", m);
	return (m);
}
