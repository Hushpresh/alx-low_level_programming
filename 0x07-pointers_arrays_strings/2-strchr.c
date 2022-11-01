#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 * @c: taking a character occurrence from
 * @s: string to accept an occurence
 * Return: A pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
