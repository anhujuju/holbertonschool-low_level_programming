#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *string_toupper(char *c)
{
	int i;
	for (i = 0; c[i] != '\0'; i++)
	{
	if(c[i] >= 'a' && c[i] <= 'z')
		c[i] = c[i] - 32;
	}
	return (c);
}
