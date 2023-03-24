#include "main.h"
/**
 * print_square - draws a square
 * Return: void
*/
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j == i)
{
_putchar('\n');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
