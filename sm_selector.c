#include "main.h"

/**
 *sm_selector - its a function pointer.
 *@str: is a character string
 *
 *Return: format specificers.
 */
int (*sm_selector(char str))(va_list args)
{
	if (str == 'c')
	{
		return (&c_placer);
	}
	else if  (str == 'd')
	{
		return (&d_placer);
	}

	else if (str == 's')
	{
		return (&s_placer);
	}
	else if (str == 'i')
	{
		return (&i_placer);
	}
	else if (str == 'b')
	{
		return (&b_placer);
	}

	return (0);

}
