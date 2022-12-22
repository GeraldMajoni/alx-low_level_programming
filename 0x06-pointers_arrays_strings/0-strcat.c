#include "main.h"

/**
 * _strcat - Entry to program to concatenate
 * @dest: pointer to string
 * @src: pointer to string
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src);
{
	int length,  i, j;

	length = 0;

	for (i = 0 ; dest[i] != '\0'; i++)
	{
		length++;
	}
	for (j = 0 ; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
