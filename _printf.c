#include "main.h"
/**
 *_printf - Replica  of the printf function
 *@format: The format string specifying the output format
 *
 *Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	int lan = 0;
	va_list args;
	unsigned int i = 0;
	unsigned int count = 0;
	char *s;

	va_start(args, format);
	if (!format[i])
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putshar(format[i]);
			i++;
			count++;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putshar((unsigned char)va_arg(args, int));
			i += 2;
			count++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			s = (va_arg(args, char *));
			write(1, s, lan);
			count += lan;
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putshar('%');
			i += 2;
			count++;
		}
	}
	va_end(args);
	return (count);
}
