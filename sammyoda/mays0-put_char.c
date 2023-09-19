#include "main.hh"

/**
 * p_utchar - Writes a single character to the standard output.
 * @c: The character to be written.
 * This function writes a single character 'c' to the standard output using the
 * Return : 1(successful)
 */
int p_utchar(char c)
{
	write(1, &c, 1);
	return 1;
}
