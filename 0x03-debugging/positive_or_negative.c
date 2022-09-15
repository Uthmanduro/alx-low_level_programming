#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * main - fuction that prints positive ornegative numbers
 *
 * Return: alwas 0
 */
void positive_or_negative(int i)
{
	int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else if (n < 0)
                printf("%d is negative\n", n);
        return (0);
}

