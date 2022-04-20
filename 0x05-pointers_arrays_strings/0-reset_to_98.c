#include "main.h"

void reset_to_98(int *n)
{

int i = 98;

n = &i;

_putchar("%p\n", n);

return (0);
}


