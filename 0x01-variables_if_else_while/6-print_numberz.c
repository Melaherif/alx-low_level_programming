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
unsigned char a;
for (a = '0' ; a <= '9' ; a++)
putchar(a);
putchar('\n');
return (0);
}
