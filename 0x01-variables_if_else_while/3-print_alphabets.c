#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print lower case and upper case'
 * Return: Always 0
*/
int main(void)
{
int n = 97;
int l = 65;

while (l <= 90 && n <= 122)
{
putchar(n);
putchar(l);
n++;
l++;
}
putchar('\n');
return (0);
}
