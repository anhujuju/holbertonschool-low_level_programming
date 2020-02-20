#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i,j;
	n--;
	for (i = 0; i <=n; i++)
	{
		j = a[n];
		a[n] = a[i];
		a[i] = j;
		n--;
 	}
}
