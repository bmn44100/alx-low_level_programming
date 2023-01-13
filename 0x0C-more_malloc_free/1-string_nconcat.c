#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns lenght of the string
 * @str: pointer toa first element of the string str
 * Return: lenght of the string str
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * string_nconcat- concatenates two strings.
 *
 * @s1: pointer to a first element of the string s1
 * @s2: pointer to a first element of the string s2
 * @n: n bytes to copy from s2 to s1
 *
 * Return: pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * if function fails, return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int k = 0;

	char *s3;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	if (n >= _strlen(s2))
	{
		s3 = malloc((_strlen(s1) + _strlen(s2)) * sizeof(char) + 1);
	}
	else
	{
		s3 = malloc((_strlen(s1) + n) * sizeof(char) + 1);
	}
	if (s3 == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[k] = s1[i];
		k++;
	}
	if (n >= _strlen(s2))
		n = _strlen(s2);
	for (j = 0; j < n; j++)
	{
		s3[k] = s2[j];
		k++'
	}
	s3[k] = '\0';
	return (s3);
}
