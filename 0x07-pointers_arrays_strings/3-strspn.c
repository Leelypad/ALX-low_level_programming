#include "main.h"
/**
*_strspn -a function that gets length of prefix substring
*@s: segment number of bytes are returned in
*@accept: bytes returned
*Return: number of bytes in initial segment
*/
unsigned int_strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;
while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
return (n);
}
return (n);
}
