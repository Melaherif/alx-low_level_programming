#include "main.h"
/**
*print_array- print array function with printf function
*@a:is a para on print_array function type int to print arry
*@n:is a para on print_array function to size of arry
*Return:empty
**/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1) ; i++)
printf("%d,", a[i]);
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
}
