#include "main.h"

/**
 *print_binary - prints binary numbers
 *@j: is an integer.
 *
 * Return:  n
 */
int print_binary(int j)
{
	int i = 0;
	int n[64];
	int x;
if (i >= 64)
{
	return (-1);
}

	if (j == 0)
	{
		_putshar('0');
	}

	while (j > 0)
	{
		n[i] = (j % 2);
		j = (j / 2);
		i++;
	}

	for (x = i - 1; x >= 0; x--)
	{
		_putshar(n[x] + '0');
	}
	return (i);
}
