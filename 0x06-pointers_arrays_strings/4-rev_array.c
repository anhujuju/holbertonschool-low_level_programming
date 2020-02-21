#include "holberton.h"
/**
* reverse_array - reverse the content of an array of integers
*@a: array to reverse
*@n: number of elements of the array
*Return: Nothing
*/
void reverse_array(int *a, int n)
{
	int j, i;

	n--;
	for (i = 0; i <= n; i++)
	{
		j = a[n];
		a[n] = a[i];
		a[i] = j;
		n--;
	}
}
