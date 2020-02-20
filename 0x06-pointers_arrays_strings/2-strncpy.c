#include "holberton.h"
/**
* *_strcpy - copies the string pointed
*@dest: copie of the string
*@src: origin of the string
*Return: dest destine copie
*/
char *_strncpy(char *dest, char *src, int n)
           {
               int i;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return dest;
           }
