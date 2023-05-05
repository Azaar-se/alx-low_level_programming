#include "main.h"

/**
 * get_bit - This returns the value of a bit
 * at an index in a decimal number
 * @s: The number to search
 * @ndx: The index of the bit
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int s, unsigned int ndx)
{
	int bit_val;

	if (ndx > 63)
		return (-1);

	bit_val = (s >> ndx) & 1;

	return (bit_val);
}
