#include <stdarg.h>

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 * @...: Additional arguments to format.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)

{
	va_list arg_list;

	int i = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c' || format[i + 1] == 's')
			{
				get_format(format[i + 1]);
			}
		}
	}
}
