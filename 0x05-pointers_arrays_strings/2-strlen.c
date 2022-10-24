#include "main.h"

/** 
 * _strlen - prints the length of the string
 * @str: string
 * Return: Length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
