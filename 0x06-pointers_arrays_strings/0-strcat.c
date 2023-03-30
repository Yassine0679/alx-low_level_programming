#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * Return: a point to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
strcat(*dest, *src);
return *dest;
}
