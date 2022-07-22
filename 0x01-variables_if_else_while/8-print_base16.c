#include<stdio.h>

/**
 * main - Entry point
 *
 * Desccription :  prints all the numbers of base 16 in lowercase,
 *  followed by a new line.
 *
 * return : Always 0 (Success)
 */
int main(void)
{
char ch;
int n;

for (n = 48; n <= 57; n++)
{
	putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
