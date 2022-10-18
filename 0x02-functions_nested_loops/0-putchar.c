#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char *pt = "_putschar";

	while (*pt)
	{
		_putschar(*pt);
		pt++;
	}
	_putschar('\n');
	return (0);
