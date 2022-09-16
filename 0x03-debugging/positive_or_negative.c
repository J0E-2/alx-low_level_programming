#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Decription: program assigns random numbers each time it is executed
 * Return: 0
 */
void positive_or_negative(int i)  
{  
srand(time(0));  
i = rand() - RAND_MAX / 2;  
/* print whether the number stored is positive or negative */  
{    
if (i > 0)      
printf("%d is positive\n", i);    
else if (i == 0)      
printf("%d is zero\n", i);    
else      
printf("%d is negative\n", i);    
}
}  
