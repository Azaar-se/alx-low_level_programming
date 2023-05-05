#include "main.h"

/**
 * clear_bit - This sets the value of a given bit to 0
 * @c: The pointer to the number to change
 * @ndx: The index of the bit to clear
 *
 * Return: 1 for success & -1 for failure
 */
int clear_bit(unsigned long int *c, unsigned int ndx)
{
	if (ndx > 63)
		return (-1);

	*c = (~(1UL << ndx) & *c);
	return (1);
}
