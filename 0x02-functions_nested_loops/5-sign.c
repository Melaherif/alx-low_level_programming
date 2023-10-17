#include "main.h"
/**
*print_sign- a function that prints the sign of a number
*@n:a para in a function
*Return: 1 for positive num and -1 for ngative num or Zero for zero num
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar (43);
return (1);
}
else if (n < 0)
{
_putchar (45);
return (-1);
}
else
{
_putchar (48);
return (0);
}
}
