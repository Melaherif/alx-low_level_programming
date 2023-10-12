#include "main.h"
/**
*more_numbers- print numbers since 0 up to 14 in the 10 line
*Return:the result numbers since 0 up to 15 in the 10 line
*/
void more_numbers(void)
{
int i;
int n;
for (n = 0; n <= 10; n++)
{
for (i = 0; i <= 14; i++)
_putchar(i + '0');
_putchar('\n');
}
}
