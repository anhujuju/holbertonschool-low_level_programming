#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a, b, d;

	for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 14; b++)
{
	if (b >= 10)
{
	d = b / 10;

	_putchar ( d + '0');
	
}
	_putchar (b % 10 + '0');
}
	_putchar ('\n');
}
}
