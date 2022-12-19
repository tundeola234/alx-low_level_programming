#include <stdio.h>
/**
*main - Print the lowercase of the alphabets from A to Z
*Return: Always 0
*/

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		char small = tolower(x);

		putchar(small);
	}
	return (0);
}
