#include <stdio.h>
#include <stdlib.h>

int main(void)
/**
 * main - initiates the program
 *
 * return: 0 successful
 *
 */
{
	char ch;

	ch = 'a';

	for (ch <= 'z'){
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
