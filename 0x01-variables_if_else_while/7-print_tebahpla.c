#include <stdio.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: 0 always a success
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
