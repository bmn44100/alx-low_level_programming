#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns lenght of the string str
 * @str: pointer to a first element of the tring str
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
 * str_concat - concatenates two strings.
 * @s1: pointer to a first element of the string s1
 * @s2: pointer to a first element of the string s2
 *
 * Return:  return NULL on failure, otherwise point
 * to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2,
 * and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s3 = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[k] = s1[i];
		k++;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		s3[k] = s2[j];
		k++;
	}

	s3[k] = '\0';

	return (s3);
}
