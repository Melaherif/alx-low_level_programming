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
char a = 'z';
while (a >= 'a')
{
putchar (a);
a--;
}
putchar ('\n');
return (0);
}
