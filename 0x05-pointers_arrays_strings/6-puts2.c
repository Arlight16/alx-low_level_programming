i#incluse "main.h"

/**
 * puts2 - function that prints 1 char/2 of a string, followed by a new line
 * @str: Set of characters
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
