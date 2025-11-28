#include "main.h"

/**
 * printf_o - Prints an integer in binary format.
 * @arg_list: List of arguments containing the integer to print.
 *
 * Return: Always 0.
 */

int printf_o(va_list args)

{
    unsigned int nbre = va_arg(args, int);
    char binary[32];
    int octal_index = 0;
    int octal;
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
        octal = nbre % 8;
        binary[octal_index] = octal;
        octal_index++;
        nbre = nbre / 8;
    }

    for (i = octal_index - 1; i >= 0; i--)
    {
        octal = binary[i];
        caract = octal + '0';
        write(1, &caract, 1);
    }

    return (octal_index);
}
