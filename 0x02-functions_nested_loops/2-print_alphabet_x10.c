#include "main.h"
/**
* print_alphabet_x10 - Print the alphabets in ten places
* Return:void
*/

void print_alphabet_x10(void)
{
int i;

for (i = 1; i <= 10; i++)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}

}

