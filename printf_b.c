#include "main.h"

/**
 * _pow - Calculates the power of a number.
 * @number: The base number.
 * @exp: The exponent.
 *
 * Return: The result of number raised to the power of exp.
 *         Returns 0 if exp is negative.
 */

unsigned int _pow(int number, int exp)
{
	unsigned int result = 1;

	if (exp < 0)
		return (0);

	while (exp > 0)
	{
		result *= number;
		exp--;
	}
	return (result);
}

/**
 * printf_b - Prints an integer in binary format.
 * @arg_list: List of arguments containing the integer to print.
 *
 * Return: Always 0.
 */

int printf_b(va_list arg_list)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	unsigned int next, power;
	int exp;
	int len;

	next = num;
	exp = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while ((_pow(2, exp)) <= num && exp < 32)
		exp++;

	len = exp;
	exp--;


	while (exp >= 0)
	{
		power = _pow(2, exp);
		if (next >= power)
		{
			next -= power;
			_putchar('1');
		}
		else
			_putchar('0');

		exp--;
	}
	return (len);
}
