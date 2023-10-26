#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @n: integer
 * @index: index
 * Return:the value of the bit at index index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	int bit_value = (n & mask) >> index;

	if (index >= sizeof(n) * 8)
		return (-1);

	return (bit_value);
}
