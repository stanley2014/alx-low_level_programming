#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: always return 0
 */

int main(void)
{
	int firdigit, secdigit;

	for (firdigit = 0; firdigit < 10; firdigit++)
	{
		for (secdigit = 0; secdigit < 10 secdigit++)
		{
			putchar((firdigit % 10) + '0');
			putchar((secdigit % 10) + '0');
			
			if (firdigit == 9 && secdigit == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}


