#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int t, u;

	/* test */
	t = _printf("%! test\n");
	printf("%d\n", t);
	u = printf("%! test\n");
	printf("%d\n", u);


	return (0);
}
