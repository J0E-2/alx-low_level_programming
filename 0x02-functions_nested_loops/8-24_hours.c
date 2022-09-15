#include "main.h"
/**
 *
 *
 *
 */
void jack_bauer(void)
{
int i;
 int j;
 int k;
 int l;
 i = 0;
 l = 0;
 while (i < 3 &&  i * 10 + l < 24)
   {
     while (l < 10)
      {
       
	 j = 0;
	 while (j < 6)
	   {
	     k = 0;
	  while (k < 10)	    
	    {
		 _putchar(i + '0');
		 _putchar(l + '0');
		 _putchar(':');
		 _putchar(j + '0');
		 _putchar(k + '0');
		 _putchar('\n');
	      k++;
	     }
	  j++;
	   }
	 l++;
      }
	 i++;
   }
}
