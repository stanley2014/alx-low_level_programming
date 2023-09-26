#include "main.h"

/**
 * _strcmp - to compare two string
 * @s1: first string to compare 
 * @s2: second string to conpare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal, above 0 if s1 is greater
 */
int _strcmp(char *s1 == *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1+;
		s2+;
	}
	return (*s1 - *s2);
}
