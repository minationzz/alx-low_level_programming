#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n, m, o;

	n = 48;
	m = 49;
	o = 50;

	for (n = 48; n <= 58; n++)
	{
		for (m = 49; m <= 58; m++)
		{
			for (o = 50; o <= 58; o++)
			{
			if (m > n && o > m)
			{
			putchar(n);
			putchar(m);
			putchar(o);
				if (n != 55 || m != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
putchar('\n');
return (0);
}
