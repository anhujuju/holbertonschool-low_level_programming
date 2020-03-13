#ifndef holberton_h
#define holberton_h
#include <stdarg.h>
typedef struct pter
{
    char *test;
    void (*printer)(va_list);

} pt;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif