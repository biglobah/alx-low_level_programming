#include "main.h"

/**
 * _islower - to check if c is lower
 * @c: Character to check if its lowre
 * Return: 1 for success, 0 for failure
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
