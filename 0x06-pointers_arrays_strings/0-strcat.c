#include "main.h"

/**
 * _strcat - Entry to program to concatenate
 * @dest: pointer to string
 * @src: pointer to string
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src);
{
	int length,  j;

	length = 0;

	while (dest[j++])
	{
		length++;
	}
	for (j = 0 ; src[j] != '\0'; j++)
	{
		dest[length++] = src[j];
	}
	return (dest);
}
