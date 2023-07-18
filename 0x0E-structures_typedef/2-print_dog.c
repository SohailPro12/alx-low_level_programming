#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the information of a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: This function prints the contents of a struct dog, including
 * its name, age, and owner. If any element of the struct is NULL, "(nil)" is
 * printed instead.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
