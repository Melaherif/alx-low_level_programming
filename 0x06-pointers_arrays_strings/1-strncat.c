#include "main.h"
/**
*_strncat- a function that concatenates two strings
*@n: a para in function
*@dest: a para in function
*@src: a para in function
*Return:dest value
*/
char *_strncat(char *dest, char *src, int n)
{
int i, x;
i = 0;
while (dest[i])
i++;
for (x = 0; x < n && src[x] != '\0'; x++)
dest[i + x] = src[x];
dest (c + i) = '\0'
return (dest);
}
