#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int a, n, max;

	max = 0;

	for (a = 0; str[a] != '\0'; a++)
		max++;

	n = (max / 2);

	if ((max % 2) == 1)
		n = ((max + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
