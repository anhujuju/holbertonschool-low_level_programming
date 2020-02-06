#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: 0
 */
int main(void)
{
	int in;
	int in2;

	for (in = 48 ; in < 58 ; in++)
{
	for (in2 = 48 ; in2 < 58 ; in2++)
{
	putchar(in);
	putchar(in2);
	putchar(44);
	putchar(32);
}
}
	putchar('\n');
	return (0);
}
