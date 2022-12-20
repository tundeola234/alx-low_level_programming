#include "main.h"

/**
 * void print_alphabet_x10 - Print 10 times the alphabet, in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}

		_putchar('\n');
		i++;
	}
}
