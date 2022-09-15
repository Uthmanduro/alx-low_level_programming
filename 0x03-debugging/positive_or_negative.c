#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * main - fuction that prints positive ornegative numbers
 *
 */
void positive_or_negative(int c)
{
	srand(time(0));
	c = rand() - RAND_MAX / 2;
	if (c > 0)
		printf("%d is positive\n", c);
	else if (c == 0)
		printf("%d is zero\n", c);
	else if (c < 0)
		printf("%d is negative\n", c);
}

