#include<stdio.h>

/**
 * main - Entry point
 *
 * Description :Program that prints all possible different combinations
 * of two digits.
 * Numbers must be separated by ,, followed by a space .The two digits must
 * be different
 * 01 and 10 are considered the same combinations of the two digits 0 and 1
 * print only the smallest combinations of two digits
 * numbers should be printed in ascending order with two digits.Only use
 * putchar function five times max
 * not allowed to use any variable of type char
 *
 * return : Always 0 (Success)
 */
int main(void)
{
int ch;
int n;
for (ch = 48; ch <= 57; ch++)
	{
	for (n = 49; n <= 57; n++)
		{
		if (n > ch)
			{
			putchar (ch);
			putchar(n);

			if (ch != 56 || n != 57)
			{
			putchar(44);
			putchar(32);
			}
			}
		}
	}
putchar(10);
return (0);
}
