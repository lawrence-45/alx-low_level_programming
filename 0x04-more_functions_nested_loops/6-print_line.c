#include "main.h"

/**
 * print_line - prints an underscore n times
 * @n: number of times printed
 *
 * Return: void
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
