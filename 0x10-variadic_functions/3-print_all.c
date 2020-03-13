#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


void print_int(va_list arg)
{
    printf ("%d", va_arg(arg, int));
}
void print_float(va_list arg)
{
    printf("%f", va_arg(arg, double));
}
void print_char(va_list arg)
{
    printf("%c", va_arg(arg, int));
}

void print_string(va_list arg)
{
    char *pr;

    pr = va_arg(arg, char*);
    if (pr == NULL)
    {
        pr = "(nil)";
    }
    printf("%s",pr);
}

void print_all(const char * const format, ...)
{
    int i,j;
    va_list arg;
    char *separator;

    pt types[] = 
    {
        {"c", print_char},
        {"i", print_int},
        {"f", print_float},
        {"s", print_string},
        {NULL, NULL}
    };
    
    va_start (arg, format);

    i = 0;
    separator="";

    while (format && format [i])
    {
        j = 0;

        while (types[j].test != NULL)
        {
            if (format [i] == types[j].test[0])
            {
                printf ("%s",separator);
                types[j].printer(arg);
                separator=",";
            }
            j++;
        }
        i++;
    }
    printf ("\n");
    va_end(arg);

}