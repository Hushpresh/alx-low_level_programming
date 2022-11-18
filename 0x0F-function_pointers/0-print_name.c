#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: name to be printed
 * @f: A pointer to a function that prints a name
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && f != 0)
		f(name);
}
