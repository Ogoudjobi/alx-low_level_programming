#include <stdio.h>

/**
 * main - print lowercase alpha a-z but remove 'q' and 'e'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			putchar(tens);
			putchar(ones);
			if (!(tens == '9' && ones == '9'))
			{
				putchr(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
