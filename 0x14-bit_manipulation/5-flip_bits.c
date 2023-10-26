#include "main.h"

/**
 * flip_bits - return number of bits that would need flipping
 * 
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		if (xor && 1ul)
			count++;
		xor >>= 1;
	}
	return (count);
}
