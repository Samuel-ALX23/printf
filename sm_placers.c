#include "main.h"
/**
 * s_placer - a function that handles a string.
 * applies formatting to the string.
 * @arg: A va_list containing the argument to be formatted and printed
 *
 * Return: The number of characters printed
 */
int s_placer(va_list arg)
{
	int y = 0;
	char *mim = va_arg(arg, char *);

	if (mim == NULL)
	{
		mim = "(null)";
	}

	while (*mim)
	{
		y += _putshar(*mim);
		mim++;
	}

	return (y);
}

/**
 *c_placer -  it a function that handle a charater.
 *@arg: A va_list containing the argument to be formatted and printed
 *
 *Return: The number of characters printed
 */

int c_placer(va_list arg)
{
	int y;

	char get_char = va_arg(arg, int);

	y = _putshar(get_char);
	return (y);
}
