#include "main.h"

/**
 * printf_u - Prints a character to stdout
 * @arg_list: List of arguments
 *
 * Return: Number of characters printed
 */

int printf_u(va_list arg_list)
{
unsigned int divisor = 1, digit, i = 0;
unsigned int number = va_arg(arg_list, unsigned int);

while (number / divisor >= 10)
	divisor *= 10;
while (divisor != 0)
{	digit = (number / divisor) % 10;
	_putchar('0' + digit);
	i++;
	divisor /= 10;
}
return (i);
}
