#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an inputted number of elements
 *     of an array of integers.
 *     @a: The array of integers.
 *     @n: The number of elements to be printed.
 *
 *     Return: 0
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
