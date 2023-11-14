#include <stdio.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: .
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner ? d->owner : "(nil)");
}
