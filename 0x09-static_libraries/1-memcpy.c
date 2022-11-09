#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: memory area copied from
 * @src: memory area copied to
 * @n: copies src to dest
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
