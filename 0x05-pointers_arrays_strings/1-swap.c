#include "main.h"

/**
 * swap_int - swapping a and b
 * @a: pointer to integer a
 * @b: pointer to integer b
 * Return: nil
 */

void swap_int(int *a, int *b)
{
	int q = *a;

	*a = *b;

	*b = q;
}
