#include "main.h"
/**
* _islower - function that checks for lowercase character
* @c: single letter input
* Return: 1 if int c is lowercase, 0 if otherwise
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
