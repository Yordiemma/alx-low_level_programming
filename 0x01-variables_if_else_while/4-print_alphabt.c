#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * followed bey new line  except for q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char le;

	for (le = 'a'; le <= 'z'; le++)
	{
		if (le != 'e' && le != 'q')
			putchar(le);
	}

	putchar('\n');

	return (0);
}


