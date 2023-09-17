#include "main.h"
/**
 *_printf - Replica  of the printf function
 *@format: The format string specifying the output format
 *
 *Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char *msg = "Custom specifier: %r\n";

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'r')
			{
				printf("%s", msg);
				count += _strln(msg);
				format++;
				continue;
			}
		}

		putchar(*format);
		count++;
		format++;
	}

	va_end(args);

	return count;
}
