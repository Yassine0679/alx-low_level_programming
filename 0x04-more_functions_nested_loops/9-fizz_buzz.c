#include <stdio.h>
/**
 * for multiples of 3, print Fizz 
 * instead of number
 * for multiples of 5, print Buzz
 * instead of number
 * for multiples of 3 and 5, print
 * FizzBuzz instead of number
*/
int main(void)
{
for (int i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf(" FizzBuzz");
}
else if (i % 3 == 0 && i % 5 != 0)
{
printf(" Fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf(" Buzz");
}
else
{
printf("%d ", i);
}
printf("\n");
}
return (0);
}
