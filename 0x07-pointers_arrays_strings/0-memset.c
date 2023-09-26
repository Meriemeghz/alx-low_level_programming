#include "main.h"

/**
 * _memset - fill a block of memory of specific value
 * @s: starting adress
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: changed qrrqy zith nez vqlue for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
