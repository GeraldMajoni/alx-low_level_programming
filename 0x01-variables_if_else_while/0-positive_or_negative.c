#include <stdio.h>
/**
 * main - Entry into program
 * printing results of condition
 * Return: (0) (Successful)
 * x: test
 */
int main(void)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
