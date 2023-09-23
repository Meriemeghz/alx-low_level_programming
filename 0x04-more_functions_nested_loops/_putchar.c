#include "main.h"
#include <unistd.h>
/**
 * _putchar -writes c to stdouy
 * @c: thr character to print
 *
 * Return 0
 * Return -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
