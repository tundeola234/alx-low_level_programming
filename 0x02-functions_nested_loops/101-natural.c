#include <stdio.h>

/**
 * main - print all the multiplesof 3 or 5 below 1024
 *sum those value
 * Return: Always 0
 */

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ( (i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
