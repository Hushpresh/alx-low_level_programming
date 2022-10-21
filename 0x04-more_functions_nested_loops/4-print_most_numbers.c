#include "main.h"

/**
 * main - checks-for printed numbers
 *@c: c is an ascii character
 *
 * Return: Always 0.
 */

void print_most_numbers(void) 
{
        char number = '0';
       
        while (number <= '9')
        {
          if( (number!=2) && (number!=4) )
          {
           _putchar(number);
            number++;
          }
        }
        _putchar ('\n');
}
