#include "main.h"
/**
 *_printf - function that produces output according to a format.
 *@format: is a formatted string
 *
 *Return: count
 */
int output_digit(const char *format, ...);
int output_digit(const char *format, ...)
{

	va_list args;
	int i;
	int count = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	if (format == NULL)
	{
		return (-1);
	}

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
			{
				count += sm_selector(format[i])(args);
			}
			else
			{
				count += _putshar('%');
				count += _putshar(format[i]);
			}

		}
		else
		{
			count += _putshar(format[i]);
		}
	}

	va_end(args);
	return (count);
}