#include "main.h"
/**
*_strlen-a function reuturn the length of a string
*@s:a char para on function
*Return:the value of (i) length of a string
**/
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
