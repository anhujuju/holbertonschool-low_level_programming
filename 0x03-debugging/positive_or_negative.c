#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * positive_or_negative - start of the program
 *
 * Return: 0
 */
void positive_or_negative(int i)
{
	int n;
	n = i;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
}
