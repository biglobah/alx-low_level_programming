#include "main.h"

/**
 * print_numbers - print numberts from 0 to 9 and add a new line
 *
 * Return: 0
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
		_putchar(ch);
	_putchar('\n');
}
