#include <stddef.h>

/**
 *array_iterator - given as a parameter on each element of an array.
 *@array: the integer to print
 *@size: the integer to print
 *@action: the integer to print
 * * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
void (*punt)(int);
size_t i;
if (action == NULL || array == NULL)
{
return;
}
punt = action;
for (i = 0; i < size; i++)
{
punt(array[i]);
}
}
