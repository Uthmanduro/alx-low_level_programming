#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses an array
 * @a: arrray to be reversed
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i < n; i--)
	{
		printf("%d", *(a + i));
		if (i > 0)
			printf(", ");
		if (i <= 0)
		{
			break;
		}
	}
	printf("\n");
}
