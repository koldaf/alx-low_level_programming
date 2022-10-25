#include "main.h"

/**
 *puts2 - print every other xter
 *@str: string input
 *Return: Void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
