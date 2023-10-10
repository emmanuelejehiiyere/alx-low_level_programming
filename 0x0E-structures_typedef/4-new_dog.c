#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, count;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (count = 0; count < length; count++)
	{
		dest[count] = src[count];
	}
	dest[count] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	int len, len2;

	len = _strlen(name);
	len2 = _strlen(owner);

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	doggie->name = malloc(sizeof(char) * (len + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	doggie->owner = malloc(sizeof(char) * (len2 + 1));
	if (doggie->owner == NULL)
	{
		free(doggie);
		free(doggie->name);
		return (NULL);
	}
	_strcpy(doggie->name, name);
	_strcpy(doggie->owner, owner);
	doggie->age = age;

	return (doggie);
}
