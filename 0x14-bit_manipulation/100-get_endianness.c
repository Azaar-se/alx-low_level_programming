#include "main.h"

/**
 * get_endianness - This checks if a machine is lil or big endian
 * Return: 0 for big & 1 for little
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *x = (char *) &t;

	return (*x);
}

