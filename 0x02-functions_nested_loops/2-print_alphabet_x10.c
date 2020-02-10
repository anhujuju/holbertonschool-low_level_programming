#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
    
	int alphabet;
	int recorrido;

	for (recorrido = 0; recorrido < 10; recorrido++)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	_putchar (alphabet);
	_putchar('\n');
	}
}
