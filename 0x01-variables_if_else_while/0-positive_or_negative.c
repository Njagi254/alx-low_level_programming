#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description : 'assign a number to the variable n to print on execution'
 * Return : always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if (n > 0)
        printf("%d is positive\n", n);
    if (n == 0)
        printf("%d is zero\n", n);
    if (n < 0)
    {
        printf("%d is negative\n", n);
    }
	return (0);
}
