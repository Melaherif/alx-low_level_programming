#include "main.h"
/**
*_puts-a function  prints a string followed by a new line
*@str:a para in the functions
*Return:empty
**/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
*str++;
}
_putchar('\n');
}
