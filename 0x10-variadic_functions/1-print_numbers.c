#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
    int i = 0;
    int sum = 0;
    va_list var;
    va_start (var,n);
    
    if(n == 0)
    {
        return (0);
    }
    for (i =0; i  < (int) n; i++)
    { 
        sum += va_arg(var,int);
    }
    va_end(var);
    return (sum);
}