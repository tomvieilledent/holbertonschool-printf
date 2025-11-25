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
	t = _printf("%c\n", s);
	printf("%d\n", t);

	/* test string */
	t = _printf("%s\n", str);
	printf("%d\n", t);

	/* test % */
	t = _printf("%%\n", str);
	printf("%d\n", t);

	/* test % */
	t = _printf("test\n");
	printf("%d\n", t);

	return (0);
}
