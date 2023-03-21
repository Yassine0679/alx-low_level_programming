#include "main.h"
/**
 * isalpha - shows 1 if character is lowercase or uppercase, another case, shows 0
 * c: The character in ASCII code
 * returns 1 if c is uppercase or lowercase
 * returns 0 if otherwise
*/
int _isalpha(int c)
{
int j;
if (c >= 97 && c <= 122){
    if (j >= 101 && j <= 132)
    {
        return (1);
    }
else
{
return (0);
}
}
_putchar('\n');
}