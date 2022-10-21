#include "main.h"
/**
 *print_diagonal - print a diagonal line
 *@n: an integer variable
 *Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		/* Handle spacing */
		if (i != 0)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
			}
		}
		else
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
