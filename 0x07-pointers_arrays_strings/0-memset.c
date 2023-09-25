#include "main.h"

/**
 * _memset:function that fills memory with a constant byte
 * @*s: is a pointer
 * @b: constant byte
 * @n: number of byte to be used to fill memory
 * description: fill the first 'n' bytes of the memory area pointed to by 's' with the constant byte 'b'
 * return: pointer to the memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}
	
	return (s);
}
