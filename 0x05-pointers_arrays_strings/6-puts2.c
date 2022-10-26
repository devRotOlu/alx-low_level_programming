

#include "main.h"


/**
 * puts2- Prints every other character of a string to stdout
 * @str: strig to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}

	_putchar('\n');
}
