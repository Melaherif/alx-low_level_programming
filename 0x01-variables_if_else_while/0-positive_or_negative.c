#include <stdio.h>
/**
*main-Entrypoint
*
*Description: A c program that prints with if function
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
scanf("%d", &n);
if (n > 0)
printf("%d is positive", n);
if (n == 0)
printf("%d is zero", n);
else if (n < 0)
printf("%d is negative", n);
return (0);
}
