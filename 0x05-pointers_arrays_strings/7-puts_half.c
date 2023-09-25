#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: input
 * Return: Print
 */

void puts_half(char *str)
{
	int longi = 0;
	char *y = str;
	int o;
	int t = 0;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = (longi / 2);

	if ((longi % 2) == 1)
		t = ((longi + 1) / 2);

	for (o = t; str[o] != '\0'; o++)
	{
		_putchar(str[o]);
	}
	_putchar('\n');
}
