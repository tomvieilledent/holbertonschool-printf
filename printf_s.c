#include "main.h"

/**
 * printf_c - Prints a character to stdout
 * @arg_list: List of arguments
 *
 * Return: Number of characters printed
 */

int printf_c(va_list arg_list)
{
char *s = va_arg(arg_list, char *);
int i = 0;

while (s[i])
{
	write(1, &s[i], 1);
	i++;
}
return (i);
}
