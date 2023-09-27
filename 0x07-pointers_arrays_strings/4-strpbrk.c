#include "mainh"

/**
 * _strpbrk - intry point
 * @s: input
 * @accept: input
 * Return: always (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = ; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}