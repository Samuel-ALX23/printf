#include "main.h"
/**
 * c_placer: function takes a character as input, formats it according
 * s_placer: his function receives a string as input, applies formatting to the string according
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

int c_placer(va_list arg)
{
	int y;

	char get_char = va_arg(arg, int);

	y = _putshar(get_char);
	return (y);
}
