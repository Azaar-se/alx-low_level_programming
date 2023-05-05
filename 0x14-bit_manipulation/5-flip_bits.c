#include "main.h"

/**
 * flip_bits - This counts the No. of bits to change
 * to get from one number to another
 * @f: The first number
 * @s: The second number
 *
 * Return: The No. of bits to change
 */
unsigned int flip_bits(unsigned long int f, unsigned long int s)
{
	int t, count = 0;
	unsigned long int karent;
	unsigned long int xclusiv = f ^ s;

	for (t = 63; t >= 0; t--)
	{
		karent = xclusiv >> t;
		if (karent & 1)
			count++;
	}

	return (count);
}
