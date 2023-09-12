#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: always return 0
 */

int main(void)
{
	int firdigit, secdigit;

	for (firdigit = 0; firdigit < 9; firdigit++)
	{
		for (secdigit = firdigit + 1; secdigit < 10; secdigit++)
		{
			putchar((firdigit % 10) + '0');
			putchar((secdigit % 10) + '0');
			
			if (firdigit == 8 && secdigit == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}


