#include <stdlib.h>
#include <stdio.h>

/*
 * main - wrute a program that prints its name.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc;) 
	{
		printf("%s\n", argv[i]);
	}
	
	return 0;
}
