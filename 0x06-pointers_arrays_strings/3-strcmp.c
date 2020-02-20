#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int n;
	for(n = 0; s1[n] != '\0'; n++)
	{
	if (s1[n] > s2[n])
		return (s1[n] - s2[n]);
	if (s1[n] < s2[n])
		return (s1[n] - s2[n]);
	}
	return (0);
	
 

}
