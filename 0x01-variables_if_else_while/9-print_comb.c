#include <stdio.h>
/**
 * main - program prints all possible combinations of single-digit numbers
 * Return: (0)
 */
int main(void)
{
	int a;

	a = '0';

	while (a <= '9')
	{
		putchar(a);

		if (a == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
		a++;
	}

	putchar('\n');
	return (0);
}
