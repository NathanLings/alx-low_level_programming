#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/*prints ten digits*/
	{
		for (ones = '0'; ones <= '9'; ones++)/*prints one digit*/
		{
			if (!((ones == tens) || (tens > ones)))/*eliminates repititions*/
		{
			putchar(tens);
			putchar(ones);
			if (!(ones == 'a' && tens == '8'))/*adds comma and space*/
			{
				putchar(',');
				putchar( );
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
