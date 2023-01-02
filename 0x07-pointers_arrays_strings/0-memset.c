#include "main.h"
/**
 * _memset - fill a block of memory wih a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of value to be changed
 *
 * Return: change array with a new value for a byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n  =;
	}
	return (s);
}
