#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main-Entrypoint
*
*Description: A c program that prints with for function
*
*Return: Always 0 (Success)
*/
int main(void)
{
char a;
int b;
for (b = 0 ; b <= 9 ; b++)
putchar(b + '0');
for (a = 'a' ; a <= 'f'; a++)
putchar(a);
putchar('\n');
return (0);
}
