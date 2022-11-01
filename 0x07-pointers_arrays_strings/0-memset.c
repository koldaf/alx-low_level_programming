#include "main.h"

/**
 * *_memset - A function to return memory set
 * @s: string variable
 * @b: another string variable
 * @n: integer value
 * Return: The pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
