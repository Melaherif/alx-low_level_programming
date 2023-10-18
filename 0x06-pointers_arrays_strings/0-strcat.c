#include "main.h"
/**
*_strcat- a function that concatenates two strings
*@dest: a para in function
*@src: a para in function
*Return:dest value
*/
char *_strcat(char *dest, char *src)
{
int i, n;
i = 0;
while (dest[i])
i++;
for (n = 0; src[n]; n++)
dest[i++] = src[n];
return (dest);
}
