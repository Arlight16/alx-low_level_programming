i#incluse "main.h"

/**
 * puts2 - function that prints 1 char/2 of a string, followed by a new line
 * @str: Set of characters
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
