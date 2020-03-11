#include <stdlib.h>

/**
 * int int_index - check if a number is equal to 98
 * @array: the integer to check
 * @size: the integer to check
 * @cmp: the integer to check
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int (*p)(int);
int i, value;
if (size <= 0)
{
return (-1);
}
p = cmp;
for (i = 0; i < size; i++)
{
value = p(array[i]);
if (value != 0)
{
return (i);
}
}
return (-1);
}
