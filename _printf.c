#include "main.h"
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

	int i = 0, len = 0, len_func = 0;
	int (*test)(va_list);

	va_start(arg_list, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c' || format[i + 1] == 's' || format[i + 1] == '%')
			{
				test = get_format(format[i + 1]);

				len_func += test(arg_list);
				i += 2;
			}

		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(arg_list);
	return (len + len_func);
}
