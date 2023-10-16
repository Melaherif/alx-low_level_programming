#include "main.h"
/**
*print_rev-a function prints a string in reverse followed by a new line
*@s:a para on function
*Return:empty
**/
void print_rev(char *s)
{
int i;
while (s[i] != '\0')
{
i++;
}
while (i--)
{
_putchar (s[i]);
}
_putchar ('\n');
}
