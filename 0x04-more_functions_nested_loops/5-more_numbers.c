#include "main.h"
/**
 *more_numbers - Print 1-14 10 times
 *Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}

			_putchar(j % 10 + '0');

		}
		_putchar('\n');
	}


}
