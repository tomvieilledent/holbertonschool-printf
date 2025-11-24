#include <string.h>
#include "main.h"

/**
 * get_format - Selects the correct function for a format specifier.
 * @s: The format specifier string (e.g., "%s", "%c").
 *
 * Return: Pointer to the function for the specifier, or NULL if not found.
 */

int (*get_format(char s))(va_list)
{
	format_t format[] = {
		{"s", printf_s},
		{"c", printf_c},
		{NULL, NULL}};
	int i = 0;

	while (format[i].specifier != NULL)
	{
		if (strcmp(format[i].specifier, s) == 0)
			return (format[i].f);
		i++;
	}

	return (NULL);
}
