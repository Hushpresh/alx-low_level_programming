#include "main.h"

/**
<<<<<<< HEAD
 *
=======
 * _strcmp - compare
 * @s1 : pointer to a char params
 * @s2 : pointer to a char params
 * Return: return *dest
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int R;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
	i++;
	}
	R = s1[i] - s2[i];
	return (R);
}
>>>>>>> 916656daa9395524291e6db274191f2002252e02
