#include "main.h"

/**
 * set_bitt - This sets a bit at a given index to 1
 * @c: The pointer to the number to change
 * @ndx: The index of the bit to set to 1
 *
 * Return: 1 for success & -1 for failure
 */
int set_bitt(unsigned long int *c, unsigned int ndx)
{
	if (ndx > 63)
		return (-1);

	*c = ((1UL << ndx) | *c);
	return (1);
}
