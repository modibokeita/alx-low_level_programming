#include "main.h"

/**
 * print_binary - prints the binary
 * representation of a number
 * @n: integer to be convered
 */
void print_binary(unsigned long int n)
{
	int i, byte;
	int num_byte = sizeof(unsigned long int) * 2;

	for (i = num_byte - 1; i >= 0; i--)
	{
		byte = (n >> i) & 1;
		_putchar(byte + '0');
	}
	_putchar('\n');
}
