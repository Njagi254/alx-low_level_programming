#include<stdio.h>

/**
 * main - Entry point
 *
 * Description : program that prints all possible combinations of single-digit
 * numbers.Numbers must be separated by ,, followed by a space Numbers should
 * be printed in ascending order
 *
 * return: Always 0 (Success)
 *
 */
int main(void)
{
int ch;

for (ch = 48; ch <= 57; ch++)/*ascii code for zero & nine*/
	{
	putchar(ch);
	if (ch != 57)/*excludes the last digit from next command*/
	putchar(44);/*ascii code for comma*/
	putchar(32);/*ascii code for space*/
	/*putchar(10);*ascii code for newline*/
	}
putchar(10);/*ascii code for newline*/
return (0);
}
