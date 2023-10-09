#include <stdio.h>
#include <time.h>
#include <stdlib.h>
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
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
if (last_digit > 5)
printf(" Last digit of %d is %d and is greater than 5 \n", n,last_digit);
else if (last_digit == 0)
printf("last digit of %d is %d and is 0\n",n,last_digit);
else if (last_digit >6)
printf("last digit of %d is %d and is less than 6 and not \n 0");
return (0);
}
