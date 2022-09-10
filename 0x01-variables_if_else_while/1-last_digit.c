#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: assigns random number to the variable and prints the last di * git of the number stored in the variable
 * Result: (0)
 */
int main(void)
{  
int n;  
srand(time(0));  
n = rand() - RAND_MAX / 2;
/* your code goes there */
{
if ((n % 10) > 5)
printf("Last digit of %d is (%d % 10) and is greater than 5\n", n);
else if (n == 0)
printf("Last digit of %d is (%d % 10) and is 0\n", n);
else
printf("Last digit of %d is (%d % 10) and is less than 6 and not 0\n", n);
}
return (0);
}
