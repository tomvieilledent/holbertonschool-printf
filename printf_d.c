#include "main.h"

/**
 * printf_d - Prints an integer to stdout
 * @arg_list: List of arguments
 *
 * Return: Number of characters printed
 */

int printf_d(va_list arg_list)
{
int divisor = 1, digit, i = 0;
long int number = va_arg(arg_list, int);


if (number < 0)
{
	_putchar('-');
	i++;
	number = -number;
}
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
