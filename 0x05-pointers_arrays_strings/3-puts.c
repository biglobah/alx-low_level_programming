#include "main.h"

/**
 * _puts - puts a string
 * @str: string
 * Retrun: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
