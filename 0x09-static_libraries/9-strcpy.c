#include "main.h"

/**
 * char *_strcpy - function
 * @dest: input
 * @src: copy
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for (; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
