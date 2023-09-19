#include "main.hh"

/**
 * _print-num: function writes a number 'num' to the standard output using the
 * @num: The number to be written.
 * @count: The current count of characters written.
 *
 * Return: num the updated count of characters
 */
int _print-num(long num, int count)
{
	if (num < 0)
	{
		putcharchar('-');
		count++;
		num = num * -1;
	}
}
