#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked function which allocates memory using malloc.
 * @b: size of memory to be allocated.
 *
 * Return: pointer to the allocated memory
 * if malloc(b) fails exit(98)
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
