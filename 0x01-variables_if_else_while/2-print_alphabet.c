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
char a;
for (a = 'a'; a <= 'z'; a++)
putchar(a);
putchar('\n');
return (0);
}

