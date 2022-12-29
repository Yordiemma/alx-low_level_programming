#include <stdio.h>

/**
 * main - print the numbers in base 16
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char le;

for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
for (letter = 'a'; letter <= 'f'; letter++)
putchar('\n');

	return (0);
}
