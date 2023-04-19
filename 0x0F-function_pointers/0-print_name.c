#include "main.h"

/**
 * print_name - a function that prints a name
 * @name: name to be printed
*/

void print_name(char *name, void (*f)(char *))
{
printf("Hello, my name is %s\n", name);
}