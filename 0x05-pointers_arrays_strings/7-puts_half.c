#include "main.h"
/**
 *puts_half - print the second half
 *@str: a string variabke
 *Return: void
 */

void puts_half(char *str)
{
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
	{ /* get the total array length */
	}

	j = (i / 2);
	for (k = j + 1; k <= i; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
