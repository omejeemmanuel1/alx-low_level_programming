#include "main.h"

/**
 * get_bit - check if a bit is on
 * @n: the integer to operate on
 * @index: the index of the desired bit
 *
 * Return: If the index is invalid, return -1. Otherwise, return the value
 * of the bit at the specified index, or if
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
