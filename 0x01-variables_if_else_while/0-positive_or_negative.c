#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determine is variable is positive or negative
 * Return: The variable is negative, zero or positive
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf ("n - is zero \n");
}
else if (n > 0)
{
printf ("n - is positive \n");
}
else
{
printf ("n - is negative \n");
}
return (0);
}
