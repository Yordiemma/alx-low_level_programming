#include "main.h"

/**
 * _memset - fill a block of memory a specific value
 * @s: starting address of memory
 * @b: the desired value
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
