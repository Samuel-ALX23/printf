#include "main.h"

/**
 * i_placer- Handles the formatting and printing of an integer
 * d_placer: Handles the formatting and printing of an integer
 * @arg: A va_list containing the argument to be formatted and printed.
 *
 * Return: The number of characters printed.
 */

int d_placer(va_list arg)
{
	int y;

	int val = va_arg(arg, int);

	y = out_num(val, 0);
	return (y);
}

int i_placer(va_list arg)
{
	int y;

	int val = va_arg(arg, int);

	y = output_num(val, 0)
		return (y);
}
