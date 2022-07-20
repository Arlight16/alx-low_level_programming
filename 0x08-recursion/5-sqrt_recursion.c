#include "main.h"

/**
 * _sqrt_recursion - Function that returns the factorial of a given number
 * @n: Number to get the square root
 *
 * Return: Square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n > 0)
		return (get_sqrt(n, 1));
	else
		return (-1);
}
