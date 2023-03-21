#include "main.h"
/**
 * _islower - shows 1 if the input is a lowercase, another case shows 0
 * c: the character in ASCII code
 * returns 1 for lowercase, 0 for the rest
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
