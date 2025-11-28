#include "main.h"

/**
 * printf_x - Prints an integer in hexadecimal format (lowercase).
 * @args: List of arguments containing the integer to print.
 *
 * Return: Number of characters printed.
 */

int printf_x(va_list args)
{
	unsigned int nbre = va_arg(args, unsigned int);
	char hex_digits[32];
	int hex_index = 0;
	int hex;
	int i;
	char caract;

	if (nbre == 0)
	{
		caract = '0';
		write(1, &caract, 1);
		return (1);
	}
	while (nbre != 0)
	{
		hex = nbre % 16;
		hex_digits[hex_index] = hex;
		hex_index++;
		nbre = nbre / 16;
	}

	for (i = hex_index - 1; i >= 0; i--)
	{
		hex = hex_digits[i];
		if (hex < 10)
			caract = hex + '0';
		else
			caract = hex - 10 + 'a';
		write(1, &caract, 1);
	}

	return (hex_index);
}
