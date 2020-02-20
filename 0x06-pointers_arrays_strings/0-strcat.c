#include "holberton.h"
/**
* *_strcpy - copies the string pointed
*@dest: copie of the string
*@src: origin of the string
*Return: dest destine copie
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}

char *_strcat(char *dest, char *src)
{
	int i, lendest, lensrc;

	lendest = _strlen(dest);
	lensrc = _strlen(src);
	for (i = 0; i < lensrc; i++)
	{
		dest[lendest + i] = src[i];
	}
	return (dest);
}
