#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -entry into program
 * Return: (0) (success)
 * arithmetic to find modulo
 * print result
 */

int main(void)
{
	int n, remain;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	remain = n % 10;
	if (remain > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, remain);
	}
	else if (n < 6 && !(n == 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, remain);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, remain);
	}
	return (0);
}


