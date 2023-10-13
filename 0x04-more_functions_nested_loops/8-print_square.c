#include "main.h"
/**
*print_square- print a squer line
*@size:is the number of times the character
*should be printed
*/
void print_square(int size)
{
int i, n;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (n = 0; n < size; n++)
{
for (i = 0; i < size; i++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
