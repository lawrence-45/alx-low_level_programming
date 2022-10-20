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
		putchar('');
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
