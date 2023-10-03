#include <stdio.h>
#include "main.h"

/**
 * main - print the number of argment
 * @argc: number
 * @argv: array
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
