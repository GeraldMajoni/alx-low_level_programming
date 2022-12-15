#include <stdio.h>

/**
 * main - entry into program
 * print
 * Return: 0 success
 */

int main(void)
{
	int i;
	char a[] = "Fizz";
	char b[] = "Buzz";

	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		if (i % 3 == 0)
			printf("%s", a);
		else if (i % 5 == 0)
			printf("%s", b);
		else
			printf("%d", i);
		if (i == 101)
			continue;
	}
	printf("\n");

	return (0);
}
