#include "main.h"
/**
 *b_placer - handles specifier b
 *@arg: is a parameter
 *
 *Return: i
 */
int b_placer(va_list arg)
{
	int i = 0;
	unsigned int uint;

	uint = va_arg(arg, unsigned int);

	i = print_binary(uint);
	return (i);
}
