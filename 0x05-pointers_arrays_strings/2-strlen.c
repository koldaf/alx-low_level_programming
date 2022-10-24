#include "main.h"

/**
 *_strlen - Print string lenght
 *@s: character , string variable
 *Return: lenght of string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}

	return (len);

}
