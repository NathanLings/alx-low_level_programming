#include <stdio.h>
/**
 * main - Program that prints size of various types on the computer it is compiled and run on
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("Size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int_: %lu 4 byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu 4 byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu 4 byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
