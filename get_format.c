#include "main.h"

/**
 * get_format - Selects the correct function for a format specifier.
 * @letter: The format specifier character (e.g., 's', 'c').
 *
 * Return: Pointer to the function for the specifier, or NULL if not found.
 */

int (*get_format(char letter))(va_list)
{
	format_t arg_list[] = {
		{'s', printf_s},
		{'c', printf_c},
		{'%', printf_37},
		{'\0', NULL}};
	int i = 0;

	while (arg_list[i].specifier)
	{
		if (arg_list[i].specifier == letter)
			return (arg_list[i].fonction);
		i++;
	}
	return (NULL);
}
