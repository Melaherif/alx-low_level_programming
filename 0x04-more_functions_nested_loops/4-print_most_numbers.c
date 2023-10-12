#include "main.h"
/**
*print_most_numbers-print the numbers since 0 up to 9 else 2 and 4
*Return:the number since 0 up tp 9 else 2 and 0
*/
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
if (i != 2 && i !=  4)
_putchar(i);
_putchar('\n');
}
