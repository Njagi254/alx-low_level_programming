#include<stdio.h>

/**
 * main - Entry point
 *
 * Description : program that prints all single digit numbers of
 *  base 10 starting from 0, followed by a new line.
 *
 *  retun : Always 0(Success)
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar(10);
return (0);
}
