#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <math.h>



/**
 * struct struct_format - Maps format specifiers to handler functions
 * @specifier: Format specifier character (e.g., "c", "s", "d", etc.)
 * @fonction: Pointer to function handling the specifier
 *
 * Used in printf to link each format specifier to its function.
 */

typedef struct struct_format
{
	char specifier;
	int (*fonction)(va_list arg_list);
} format_t;

int printf_c(va_list arg_list);
int printf_s(va_list arg_list);
int printf_d(va_list arg_list);
int printf_37(va_list arg_list);
int printf_b(va_list arg_list);

int _printf(const char *format, ...);
int (*get_format(char letter))(va_list);
int _putchar(char c);

#endif
