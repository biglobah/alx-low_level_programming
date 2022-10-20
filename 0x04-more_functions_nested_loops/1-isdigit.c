#include "main.h"

/**
 * _isdigit - A function to check for a digit from 0-9
 * @c: the varaible of the digit
 * Return: 1 if success, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
