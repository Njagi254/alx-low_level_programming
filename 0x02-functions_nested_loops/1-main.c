#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
	for (int c = 97; c <= 122; ++c)
		putchar("%c ", c);
	putchar("\n");
}
int main(void)
{
	print_alphabet();
	return(0);
}
