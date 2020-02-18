#include "holberton.h"
/**
* swap_int - swaps the values
*@a: pointer to a
*@b: ponter to b
*Return: 0
*/
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
