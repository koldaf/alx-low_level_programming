#include "main.h"

/**
 *swap_int - swap the values of two integers
 *@a: interger value a
 *@b: integer value b
 *Return: void
 **/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
