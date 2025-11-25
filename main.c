#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s = 'a';
	char *str = "abcd";
	int t;

	/* test character*/
	t = _printf("test %c %c test\n", s, s);
	printf("%d\n", t);

	/* test string */
	t = _printf("test %s %s test\n", str, str);
	printf("%d\n", t);

	/* test % */
	t = _printf("test %% %s test\n", str);
	printf("%d\n", t);

	return (0);
}
