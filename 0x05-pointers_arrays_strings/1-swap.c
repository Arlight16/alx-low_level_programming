#include "main.h"

/**
 * swap_int - Swap the value of two integers
 * Auth: Gloria Kerubo
 * @a: Integer a
 * @b: Integer b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
