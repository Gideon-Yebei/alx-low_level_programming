#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

void print_dog(struct dog *d);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
		struct dog my_dog;

		my_dog.name = "Poppy";
		my_dog.age = 3.5;
		my_dog.owner = "Bob";
		print_dog(&my_dog);
		return (0);
}

/**
 * print_dog - print the details of a dog
 * @d: A struct pointer
 *
 * Description: Prints all the properties of the dog
 */
void print_dog(struct dog *d)
{
		if (d == NULL)
			return;
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
}
