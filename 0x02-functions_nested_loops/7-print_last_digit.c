#include "main.h"
/**
*print_last_digit -prints the last digit
@n: the passed arguments
*Return: value of the last digit
*/
int print_last_digit(int n)
{
int ld = n % 10;
if (ld < 0)
ld = -1;
x = n % 10;
_putchar(ld + '0');
return (0);
}
