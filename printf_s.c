#include "main.h"

/**
 * printf_s - Prints a string to stdout
 * @arg_list: List of arguments
 *
 * Return: Number of characters printed
 */

int printf_s(va_list arg_list)
{
char *s = va_arg(arg_list, char *);
int i = 0;

if (s == NULL)
{
	write(1, "(null)", 6);
	return (6);
}

while (s[i])
{
	write(1, &s[i], 1);
	i++;
}
return (i);
}
