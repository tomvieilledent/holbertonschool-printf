#include "main.h"

/**
 * printf_c - Prints a character to stdout
 * @arg_list: List of arguments
 *
 * Return: Number of characters printed
 */

int printf_c(va_list arg_list)
{
	char c = va_arg(arg_list, int);

	_putchar(c);
	return (1);
}
