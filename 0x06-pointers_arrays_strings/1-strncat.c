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

char *_strncat(char *dest, char *src, int n)
{
         int i;
	 int len;

        len = _strlen(dest);
        for (i = 0; (i < n && src[i] !='\0'); i++)
        {
                dest[len + i] = src[i];
        }
        return (dest);
}
