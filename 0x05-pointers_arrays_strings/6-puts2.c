#include "holberton.h"
/**
* puts2 - print one char out
*@str: string to print
*Return: Nothing
*/
void puts2(char *str)
{
	int len;
	char l;

	for (len = 0; *(str + len) != 0; len++)
	{
		if (len % 2 == 0)
		{
			l = *(str + len);
			_putchar(l);
		}
	}
	_putchar('\n');
}
