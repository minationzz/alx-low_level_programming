#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 * followed by a new line (\n)
 *
 **/




void more_numbers(void)
{

int count;
int num;

count = 0;

while (count < 11)
{
while (num < 15)
{
num = 0;
if (num > 9)
_putchar(num / 10);
_putchar(num % 10);
num++;
}
_putchar('\n');
count++;
}
}
