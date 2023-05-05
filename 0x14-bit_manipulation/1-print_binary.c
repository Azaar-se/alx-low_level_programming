#include "main.h"

/**
 * print_binary - This prints the binary equivalent of a decimal number
 * @t: The number to print in binary
 */
void print_binary(unsigned long int t)
{
	int n, count = 0;
	unsigned long int current;

	for (n = 63; n >= 0; n--)
	{
		current = t >> n;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
