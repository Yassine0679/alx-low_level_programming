#include "main.h"
/**
 * _puts_recursion - a function that prints a string
 * @s: string
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
