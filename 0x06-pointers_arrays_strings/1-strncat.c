#include "holberton.h"
/**
* *_strcpy - copies the string pointed
*@dest: copie of the string
*@src: origin of the string
*Return: dest destine copie
*/

void reverse_array(int *a, int n)
{
	int i;
	n--;
	for(i = 0; i <= n; i++)
	{
	 aux = a[n];
	 a[n] = a [i];
	 a[i] = aux;
	n--;
	}
}
