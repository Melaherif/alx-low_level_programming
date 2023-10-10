#include "main.h"

/**
*print_alphabet_x10- utilizes on the _putchar function to print
*the alphabet a - z x10
*/
void print_alphabet_x10(void)
{
int i;
char n;
for (i = 0 ; i <= 9 ; i++)
{
for (n = 'a'; n <= 'z'; n++)
_putchar(n);
_putchar('\n');
}
}



