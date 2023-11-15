#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int a, j, k;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (a = 0; name[a] != '\0'; a++)
		;
	new_dog->name = malloc(sizeof(char) * (a + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
		;
	new_dog->owner = malloc(sizeof(char) * (j + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k <= a; k++)
		new_dog->name[k] = name[k];
	for (k = 0; k <= j; k++)
		new_dog->owner[k] = owner[k];
	new_dog->age = age;
	return (new_dog);
}
