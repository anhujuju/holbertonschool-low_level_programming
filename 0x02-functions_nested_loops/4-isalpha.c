#include "holberton.h"

/**
 * _isalpha - is a function.
 * @c: is a int variable.
 * Return: 0 and 1;.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}