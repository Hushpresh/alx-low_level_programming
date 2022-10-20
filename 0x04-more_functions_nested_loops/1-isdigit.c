#include "main.h"
#include <stdio.h>

/**
 *main - checks-for digit
 *@c: c is an ascii character
 *
 * Return: 1 if digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
        }
        else
	{
	return (0);
        }
}

