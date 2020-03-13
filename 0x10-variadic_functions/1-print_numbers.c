#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{

    unsigned int i;
    va_list list;

    va_start(list,n);
    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(list, int));
        if (separator != NULL && i != n-1)
        {
            printf("%s", separator); 
        }
    }
    printf("\n");
    va_end (list);

}

