#include <stdio.h>
/**
 * main - prints 1 - 100 followed by new line
 * prints Fizz for multiples 0f 3
 * prints Buzz for multiples of 5
 * and FizzBuzz for multiples of 15
 *
 * Return: void
 */
int main(void)
{
int i;
for (i = 0; i <= 100; i++)
{
if ((i % 15) == 0)
printf("FizzBuzz\n");
else if ((i % 5) == 0)
printf("Buzz\n");
else if ((i % 3) == 0)
printf("Fizz\n");
else
printf("%d\n", i);
}
return (0);
}
