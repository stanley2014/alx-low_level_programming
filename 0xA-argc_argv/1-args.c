#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return 0;
}