#include "main.h"

/**
 * *_strncat - two words
 * @dest: pointer to a char param
 * @src: pointer to a char param
 * @n: int paramter
 * Return: return *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int i;

	m = 0;

	for (i = 0; i < 1000; i++)
	{
	if (dest[i] == '\0')
	{
	break;
	}
	m++;
	}

	for (i = 0; src[1] != '\0' && i < n; i++)
	{
	dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
