#include "main.h"

/**
 * _memcpy: function that copies memory area
 * @dest: char area to be copied into
 * @src: char area to be copied from
 * @n: number of byte to be copied from src to dest area
 * description: copy 'n' byte from the src memory area to the dest memory area
 * return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
