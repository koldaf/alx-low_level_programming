#include <stdio.h>

/**
 *main - Print all aplphabets except q and e
 *Return: o as always
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' &&  ch != 'e')
		{
			putchar(ch);

		}
	}
	putchar('\n');
	return (0);
}
