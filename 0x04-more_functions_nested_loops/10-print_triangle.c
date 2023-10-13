#include "main.h"
/**
*print_triangle-print a triangle of squares according parameters
*@size:the size of the squares triangle
*Return:empty
*/
void print_triangle(int size)
{
int i, x, y;
if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 0 ; i < size ; i++)
{
for (y = size - i ; y > 1 ; y--)
{
putchar(32);
}
for (x = 0 ; x <= i ; x++)
{
putchar(35);
}
putchar('\n');
}
}
}
