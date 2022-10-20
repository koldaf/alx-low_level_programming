#include <main.h>
/**
 * _isupper - a function that checks for ucase
 * @c: input number
 * Return: 1 or 0 depending on the vaule of c
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
