#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a function that checks the sign of a number
 * Return: 0 a success
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
