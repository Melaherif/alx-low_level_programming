#include "main.h"
/**
*print_diagonal- print a diagonal line
*@n:is the number of times the character
*should be printed
*Return:draw "\" and space
*/
void print_diagonal(int n)
{
int a;
int b;
if (n <= 0)
_putchar('\n');
else
{
for (a = 1; a <= n ; a++)
{
for (b = 1; b <= a ; b++)
_putchar(' ');
_putchar(92);/*is equal to '/' char*/
_putchar('\n');
}
}
}
