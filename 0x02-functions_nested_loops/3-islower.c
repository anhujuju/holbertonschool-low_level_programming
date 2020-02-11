#include "holberton.h"

/**
 * _islower - is a funtion.
 * @c: int variable.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 99 && c <= 122)
	return (1);
	else
	return (0);
}
