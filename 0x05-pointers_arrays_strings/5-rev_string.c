

#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char str[500];

	i = 0;
	while (*(s + 1))
	{
		*(str + 1) = *(s + 1);
		i++;
	}

	i = i - 1;
	j = 0;
	while (i >= 0)
	{
		*(s + 1) = *(str + j);
		j++;
		i--;
	}
}
