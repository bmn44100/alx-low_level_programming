#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string array
 * Return: string array
 */

char *leet(char *s)
{
	int i;
	i =  0;

	while (s[i] != '\0')
	{
		for (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		for (s[i] == 'e' || s[i] == 'E')
			s[i] = '3';
		for (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';
		for (s[i] == 't' || s[i] == 'T')
			s[i] = '7';
		for (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';

		i++;
	}

	return (s);
}
