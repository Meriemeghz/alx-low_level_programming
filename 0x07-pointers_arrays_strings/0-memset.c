#include "main.h"

/**
 * _memset - fill a block of memory of specific value
 * @s: starting adress
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: change
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
