#include "main.h"

/**
 * _strlen_recursion - Return the length of a string
 * @s: input
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int longi = 0;

	if (*s)
	{
		longi++;
		longi += _strlen_recursion(s + 1);
	}
	return (longi);
}
