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

while (n <= 122)
{
putchar(n);
n++;
}
while (l <= 90)
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
