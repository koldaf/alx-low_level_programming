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

	j = ((i - 1) / 2);
	if (j % 2 != 0)
	{
		_putchar(str[i]);
	}
	else
	{
		for (k = j + 1; k <= i; k++)
		{
			_putchar(str[k]);
		}
	}

	_putchar('\n');
}
