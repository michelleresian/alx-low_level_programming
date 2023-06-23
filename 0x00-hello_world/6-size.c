#include <stdio.h>

 /**
  * main - Entry point
  *
  * Return: Always 0 (success)
  */
 int main(void)
 {
 char c;
 int i;
 long int li;
 long long int lli;
 float f;

 printf("size of a char: %zu byte(S)\n", sizeof(c));
 printf("size of an int: %zu byte(S)\n", sizeof(i));
 printf("size of a long int: %zu byte(s)\n", sizeof(li));
 sizeof(lli));
 printf("size of a float: %zu byte(s)\n", sizeof(f));
 return (0);
 }
