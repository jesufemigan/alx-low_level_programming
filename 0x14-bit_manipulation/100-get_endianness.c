#include "main.h"

/**
 * get_endianness - returns the endianess of the system
 *
 * Return: o if big endian, 1 if small
 */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
