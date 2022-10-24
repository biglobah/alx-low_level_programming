#include "main.h"

/** _strlen - prints the length of the string
 * @str: string
 * Return: Length
 */
int _strlen(char *s)
{
	int i = 1;
	int sum = 0;
	char pl = *s[0];

	while (pl != '\0')
	{
		sum++;
		pl =  s(i++);
	}
	return (sum);
}
