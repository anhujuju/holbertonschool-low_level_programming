#include "holberton.h"

/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: void.
 */
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
	_putchar (alphabet);
	_putchar('\n');
}
