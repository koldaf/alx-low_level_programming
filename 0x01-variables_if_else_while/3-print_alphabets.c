#include <stdio.h>
/**
 *main - print alphabet in lower and upper case
 *Return:0 as usual
 */

int main(void)
{
	char ah;

	char bh;

	for (ah = 'a'; ah <= 'z'; ah++)
	{
		putchar(ah);
	}
	for (bh = 'A'; bh <= 'Z'; bh++)
	{
		putchar(bh);
	}
	putchar('\n');
	return (0);
}
