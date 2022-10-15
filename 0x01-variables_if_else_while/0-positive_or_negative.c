#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Value of 0
 */
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		print("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
		print("%d is zero\n", n);
	return (0);
