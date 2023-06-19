#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,and then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	int m, r;

	for (m = 97; m <= 122; m++)
		putchar(m);
	for (r = 65; r <= 90; r++)
		putchar(r);
	putchar('\n');
	return (0);
}
