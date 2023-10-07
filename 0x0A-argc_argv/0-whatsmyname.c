#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/*
 * main - write a program that prints its name.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[argc - 1]);
	
	return (0);
}
