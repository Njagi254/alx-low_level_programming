#include<stdio.h>

/**
 * main - Entry point
 *
 * Description : Program tha prints all possible combinations of two
 * digit numbers from 0-99
 * in ascending order. Not allowed to use variable type char.
 * Puchar functioin to be used 8 times max
 *
 * return : Always 0 (Success)
 */
int main(void)
{
	int ch;
	int n;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 48; n <= 57; n++)
		{
			putchar(ch);
			putchar(n);

			if (ch != 57 || n != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
putchar(10);
return (0);
}
