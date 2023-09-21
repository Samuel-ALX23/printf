#include "main.h"

/**
 *print_binary - prints binary numbers
 *@j: is an integer.
 *
 * Return: count
 */
int print_binary(unsigned int j)
{
	int i = 0, count = 0, binary_len = 0;
	char binary_str[50];

	do {
		binary_str[binary_len++] = '0' + (j % 2);
		j /= 2;
	} while (j != 0);

	for (i = binary_len - 1; i >= 0; i--)
		count += _putshar(binary_str[i]);

	return (count);
}
