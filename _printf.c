#include "main.h"
/**
 *_printf - function that produces output according to a format.
 *@format: is a formatted string
 *
 *Return: count
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int count = 0;

	va_start(args, format);
	if (!format)
	{
		return (-1);
	}

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{

			if (format[i + 1] == 'c' || format[i + 1] == 's')
			{
				count += sm_selector(format[i])(args);
			}
			else
			{
				count += _putshar('%');
				continue;
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

