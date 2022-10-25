#include "main.h"

/**
 * *_strcpy - copies a string from one variable to another
 * @dest: destination variable
 * @src: Source variable
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);

}
