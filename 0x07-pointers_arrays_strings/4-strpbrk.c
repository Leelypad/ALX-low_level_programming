#include "main.h"
/**
*_strpbrk -a function that searches a string for any set of bytes
*@s: string where first occurrence is located
*@accept: string where bytes are located
*Return: Always 0 (Succes)
*/
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s = accept[k])
return (s);
}
s++;
}
return ('\0');
}
