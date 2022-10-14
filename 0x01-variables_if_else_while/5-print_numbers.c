#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;
		while (n < 10)
		{
			printf("%d", n);
			n++;
		}
		if (n == 10)
		{
			printf("\n");
		}
	return (0);
}
