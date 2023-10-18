#include "main.h"
/**
*_strncpy- a function that concatenates two strings
*@n: a para in function
*@dest: a para in function
*@src: a para in function
*Return:dest value
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
