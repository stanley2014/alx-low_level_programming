#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always return 0
 */

int main(void)
{
	printf("Size of a char: %lu bytes\n", sizeof(char));
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of long int: %lu bytes\n", sizeof(long int));
	printf("Size of long long  int: %lu bytes\n", sizeof(long long int));
	printf("Size of float: %lu bytes\n", sizeof(float));
	return(0);
}
