#include <stdlib.h>
#include <stdio.h>

/*
 * main - wrute a program that prints its name.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

	printf("%s\n", argv[argc - 1]);
	
	return 0;
}