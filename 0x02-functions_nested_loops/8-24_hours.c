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
while (i <= 2)
  {
    j = 0;
      while (j <= 3)
	{
	 k = 0;
	  while (k <= 5)
	    {
	       l = 0;
	     while (l <= 9)
	       {
		 _putchar(i + '0');
		 _putchar(j + '0');
		 _putchar(':');
		 _putchar(k + '0');
		 _putchar(l + '0');
		 _putchar('\n');
		l++;
	       }
	      k++;
	    }
	 j++;
	}
    i++;
  }
}
