#include "main.h"

/**
 * _strcat - Entry to program to concatenate
 * @dest: pointer to string
 * @src: pointer to string
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src);
{
	int i, j;
	int length;

	i = 0;
	j = 0;
	length = 0;

	for (i ; dest[i] != '\0'; i++)
	{
		length++;
	}
	for (j ; src[j] == '\0'; j++, length++)
	{
		dest[length] = src[j];
	}

	return (dest);
}
