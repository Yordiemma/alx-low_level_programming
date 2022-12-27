#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the number randomly generated
 * greater then 5, less then 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	stand(time));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
				n, n % 10);
	}

	return (0);
}
