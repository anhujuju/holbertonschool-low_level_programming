#include <stdio.h>

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: name of the person
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
void(*ptnfunc)(char *f);
if (name == NULL && f == NULL)
return;
ptnfunc = f;
ptnfunc(name);

}
