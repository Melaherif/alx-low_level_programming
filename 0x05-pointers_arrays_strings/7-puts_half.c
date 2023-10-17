#include "main.h"
/**
*puts_half-a function that prints half of a string
*@str:a para on th function
*Return:empty
**/
void puts_half(char *str)
{
int n;
for (n = 0; str[n] != '\0'; n++)
{
if (n > 4)
putchar (str[n]);
}
putchar ('\n');
}
