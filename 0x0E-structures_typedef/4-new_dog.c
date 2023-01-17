#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns length of the string
 * @str: poiter to a first element of the str
 * Return: length of the string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strcpy - copys s1 into s2 and adds null terminator
 * @s1: pointer to a first element of s1
 * @s2: pointer to a first element of s2
 * Return: pointer to a first element of s2
 */

char *_strcpy(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		s2[i] = s1[i];
	s2[i] = '\0';

	return (s2);
}

/**
 * new_dog - creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to a new structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_cpy;
	char *owner_cpy;

	new_dog = malloc(sizeof(struct dog_t));
	if (new_dog == NULL)
		return (NULL);
	name_cpy = malloc(sizeof(char) * _strlen(name) + 1);
	if (name_cpy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	owner_cpy = malloc(sizeof(char) * _strlen(owner) + 1);
	if (owner_cpy == NULL)
	{
		free(name_cpy);
		free(new_dog);
		return (NULL);
	}
	_strcpy(name, name_cpy);
	_strcpy(owner, owner_cpy);
	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;
	return (new_dog);
}
