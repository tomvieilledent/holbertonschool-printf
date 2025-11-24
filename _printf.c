#include <stdarg.h>

int _printf(const char *format, ...)

{
	va_list arg_list;

	int i = 0;

	while (format[i] != '\0')
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
