#include "main.h"

/**
 * _isalpha - To check if a letter id loer case or upper case
 * @c: character used to check
 * Return: 1 on success, 0 on failure
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
