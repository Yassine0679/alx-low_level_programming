#include "main.h"
/**
 * more_numbers - prints number from 0 to 14, 10 times
*/

void more_numbers(void)
{
int j;
char c;
for (j = 1; j <= 10; j++)
{
for (c = '0'; c <= '14'; c++)
{
_putchar(c);
}
}
_putchar('\n');
}
