#include "main.h"
/**
 * _islower - Return 1 if c is lowercase
 * returns 0 otherwise
*/
int _islower(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
else 
{
return (0);
}
_putchar('\n');
}
