#include "main.h"
#include <unistd.h>

/**
 * main - Print putchar
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
