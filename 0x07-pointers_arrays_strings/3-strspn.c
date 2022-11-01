#include "main.h"
/**
 * unsigned - afunction that gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, tag;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		tag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				tag = 1;
			}
		}
		if (tag == 0)
		{
			return (k);
		}
	}
	return (0);
}
