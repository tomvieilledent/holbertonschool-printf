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
			if (format[i + 1])
			{
				test = get_format(format[i + 1]);
				if (test == NULL)
				{
					write(1, &format[i], 1);
					write(1, &format[i + 1], 1);
					i += 2;
					len += 2;
					continue;
				}
				len_func += test(arg_list);
				i += 2;
			}
			else
				return (-1);
		}
		else
		{
			_putchar(format[i]);
			i++;
			len++;
		}
	}
	va_end(arg_list);
	return (len + len_func);
}
