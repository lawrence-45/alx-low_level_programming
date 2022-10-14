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
	int n;
	int Lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, Lastdigit);
	if (Lastdigit > 5)
	{
		printf("and is greater than 5\n");
	}
	if (Lastdigit == 0)
	{
		printf("and is 0\n");
	}
	if (Lastdigit < 6 && Lastdigit != 0)
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}
