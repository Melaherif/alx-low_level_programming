#include <stdio.h>
/**
*main-Entrypoint
*
*Description: A c program that prints with sizeof function
*
*Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of a char:%lubyte (s)\n", sizeof(char));
printf("Size of an int:%lubyte (s)\n", sizeof(int));
printf("Size of a long int:%lubyte (s)\n", sizeof(long int));
printf("Size of a long long int:%lubyte (s)", sizeof(long long int));
printf("Size of a float:%lubyte (s)", sizeof(float));
return (0);
}
