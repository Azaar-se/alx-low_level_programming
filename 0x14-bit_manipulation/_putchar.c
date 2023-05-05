#include "main.h"
#include <unistd.h>
/**
 * _putchar - This writes char c to standard output
 * @c: The char to print
 *
 * Return: On success 1.
 * On error, -1 is returned & errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
