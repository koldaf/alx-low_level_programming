#include "main.h"

/**
 *_puts - A function that prints a new string
 *@str: The string variable
 *Return: Void
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
