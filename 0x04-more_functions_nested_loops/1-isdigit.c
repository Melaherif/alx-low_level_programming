#include "main.h"
/**
*_isdigit -check if charactor is digit
*@c:the character to be checked
*Return: 1 for digit return 0 for any else
*/
int _isdigit(int c)
{
if (c <= 49 && c >= 57)
{
return (1);
}
return (0);
}
