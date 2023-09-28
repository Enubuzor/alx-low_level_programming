#include "main.h"

/**
 * _puts_recursion: function to print the string
 * @s: string to be printed
 * description: print a string followed by a new line
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
