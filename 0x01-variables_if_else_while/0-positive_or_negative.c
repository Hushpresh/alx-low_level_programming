#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there 
*main - assigns a random numb. to the variable n
*every time it is run it execute and print
*return (0) = success
* betty style doc for function main goes there 
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
