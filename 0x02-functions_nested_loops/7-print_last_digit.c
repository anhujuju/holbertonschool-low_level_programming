#include "holberton.h"

/**
 * print_last_digit - prints last digit.
 *@n: n is a variable.
 * Return: returns n.
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
	i = (-i);
	}
	_putchar(i + '0');
	return (i);
}
