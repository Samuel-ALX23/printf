#include "main.hh"

 /**
 *_printf - Replica  of the printf function
 *@format: The format string specifying the output format
 *
 *Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args,format);
	int y = 0;

	if (format == NULL)
	{
		return -1;
	}

	for (y = 0; format[y] != '\0'; y++)
	{
		if (format[y] == '%' || format[y] == 'd' || format[i] == 'd')
		{
			y++;
			if (format[y] == 'c')
			{
				ncount += grab(format[y](args);
			}
			else
			{
				ncount += p_utchar('%');
				continue;
			}
		}
		else
		{
			ncount += p_utchar(format[y]);
		}
	}
	return ncount;
}
