#include "main.h"

/**
 *print_rev - print characters in reverse order
 *@s: Character input
 *Return:void
 */

void print_rev(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
		;
	for (j--; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
