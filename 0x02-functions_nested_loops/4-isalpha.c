#include "main.h"
/**
*_isalpha- a function that checks for alphabetic character
*@c:a para in the function
*Return:1 for alphabet character or 0 for any else
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 120))
{
return (1);
}
return (0);
}
