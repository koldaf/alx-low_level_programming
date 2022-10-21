#include <stdio.h>

/**
 *main - print 1-100 identifying x3, x5 and x3&x5
 *Return: 0 as always
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", "FizzBuzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
