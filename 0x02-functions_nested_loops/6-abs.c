#include "main.h"

/**
 * _abs - Prints the absolute value of an integer.
 * @a: The integer to compute its absolute value.
 * Return: The abs value
 */
int _abs(int a)
{
	int i = a;
	int absvalue;

	if (i < 0)
	{
		i = i * (-1);
	}
	absvalue = i;
	return (absvalue);
}

