#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/*
 * main - wrute a program that prints its name.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

	printf("%s\n", argv[argc - 1]);
	
	return 0;
}
