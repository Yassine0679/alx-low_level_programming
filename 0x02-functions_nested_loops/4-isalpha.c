#include "main.h"
/**
 * 
 * the function _isalpha - shows 1 if character is
 * lowercase or uppercase, another case, shows 0
 * c: The character in ASCII code
 * returns 1 if c is uppercase or lowercase
 * returns 0 if otherwise
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
