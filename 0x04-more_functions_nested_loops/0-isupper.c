#include "main.h"
/**
*_i - Chekcks for _isupper chracter
*@c:the character to be checked
*Return: 1 for _isupper character or 0 for any thing else
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
