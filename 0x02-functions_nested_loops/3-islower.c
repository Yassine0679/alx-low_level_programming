#include "main.h"
/**
 * the function _islower - Shows 1 if the input is a
 * lowercase character, Another cases, shows 0.
 *
 * @c: The character in ASCII code.
 *
 * Returns 1 for lowercase character, 0 for the rest.
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
