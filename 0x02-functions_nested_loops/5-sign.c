#include "main.h"
/**
 *int print_sign(int n) - return 1 and prints + if n is greater than zero
 return 0 and print 0 if n is zero
 return -1 and prints - if n is less than zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else{
_putchar('-');
return (-1);
}
_putchar('\n');
}