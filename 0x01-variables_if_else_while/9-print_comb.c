#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main-Entrypoint
*
*Description: A c program that prints with putchar function
*
*Return: Always 0 (Success)
*/
int main(void)
{
int a;
for (a = 0 ; a <= 9 ; a++)
putchar(a + '0');
if (a != '9')
{
 putchar(',');
 putchar(' ');
}
putchar('\n');
return(0);
}
