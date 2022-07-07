#include "main.h"

/**
 * main - check the code
 */
void more_numbers(void)
{
	int a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			_putchar(a + '0');
		}
		_putchar('\n');
	}
}
