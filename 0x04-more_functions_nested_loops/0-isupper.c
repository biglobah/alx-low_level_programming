#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: character to be used to check
 * Return: 1 if success, 0 if otherwise
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
