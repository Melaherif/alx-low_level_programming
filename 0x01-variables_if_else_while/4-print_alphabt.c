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
char e;
char q;
e = 'e';
q = 'q';
for (a = 'a'; a <= 'z'; a++)
if (a != e && a != 'q')
putchar(a);
return (0);
}
