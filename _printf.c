#include "main.h"
/**
 *_printf - function that produces output according to a format.
 *@format: is a formatted string
 *
 *Return: count
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
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
			if (format[i] == 'c' || format[i] == 's' ||
					format[i] == 'd' || format[i] == 'i')
			{
				count += sm_selector(format[i])(args);
			}
			else if (format[i] == '%')
			{
				_putshar('%');
				count++;
			}
			else
			{
				_putshar('%');
				_putshar(format[i]);
				count++;
			}
		}
		else
		{
			_putshar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
