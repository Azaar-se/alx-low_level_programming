#include "main.h"

/**
 * binary_to_uint - This converts a binary number to unsigned int
 * @t: The string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *t)
{
	int n;
	unsigned int dec_val = 0;

	if (!t)
		return (0);

	for (n = 0; t[n]; n++)
	{
		if (t[n] < '0' || t[n] > '1')
			return (0);
		dec_val = 2 * dec_val + (t[n] - '0');
	}

	return (dec_val);
}
