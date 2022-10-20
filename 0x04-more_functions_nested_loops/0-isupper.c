#include "main.h"


/**
 * main - checks-for uppercase
 * @c: c is an ascii character
 *
 * Return: 1 if c is uppercase or 0 if lowercase
 */

int _isupper(int c)
{
       char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
	if (c == uppercase)
	{
	isupper = 1;
	break;
	}
	}

	return (isupper);
}	
