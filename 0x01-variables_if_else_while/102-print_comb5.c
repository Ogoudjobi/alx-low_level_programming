#include <stdio.h>

/**
 * main - print lowercase alpha a-z but remove 'q' and 'e'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;
	int t;
	int o;
	int flag = 0;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (t = tens; t <= '9'; t++)
			{
				for (o = (ones + 1); o <= '9'; o++)
				{
					if (flag == 1)
					{
						o = '0';
						flag = 0;
					}
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t);
					putchar(o);

					if (!((tens == '9' && ones == '8') && (t == '9' && o == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				flag = 1;
			}
		}
	}
	putchar('\n');

	return (0);
}
