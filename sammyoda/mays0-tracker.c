#include "main.hh"

/**
 * grab - Selects and returns a function pointer based on the input character
 * @str: The character used to determine the function to select
 *
 * Return: 0 a function pointer based on the input character.
 */

int (*grab(char str))(var_list arg)
{
	if ( str == 'c')
	{
		return &c-handler;
	}
	else if ( str == 'd')
	{
		return &d-handler;
	}
	else
	{
		return &s-handler;
	}
	return 0;
}
