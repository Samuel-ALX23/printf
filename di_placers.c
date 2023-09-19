#include "main.h"

/**
 * d_placer - a function that takes and print formated integers
 * @arg: A va_list containing the argument to be formatted and printed.
 *
 * Return: The number of characters printed.
 */

int d_placer(va_list arg)
{
	int y;

	int val = va_arg(arg, int);

	y = output_num(val, 0);
	return (y);
}

/**
 * i_placer - a function that produces formatted integers as an output
 * @arg: A va_list containing the argument to be formatted and printed.
 *
 * Return: The number of characters printed.
 */

int i_placer(va_list arg)
{
	int y;

	int val = va_arg(arg, int);

	y = output_num(val, 0);
		return (y);

}
