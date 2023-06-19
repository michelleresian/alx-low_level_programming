#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of a randomly generated number
 * whether it is greater than 5,less than 6, or 0
 *
 * Return: Always 0
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	printf("last digit of %d is %d ", n, l);
	if (l > 5)
		printf("and is greater than 5\n");
	else if (1 < 5)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is 0\n");
	return (0);
}
