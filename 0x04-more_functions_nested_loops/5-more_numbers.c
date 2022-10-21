
#include "main.h"

/**
 * more_numbers - Prints the numbers 0 to 14 ten times
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		i++;
		_putchar('\n');
	}
}
