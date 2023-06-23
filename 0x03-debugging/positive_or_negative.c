#include "main.h"
/**
 * main - Entry point
 * description: "positive_or_negative"
 *Return: always 0
 */
void positive_or_negative(int i)
{

i = 0;

if (i > 0)
	printf("%d is positive\n", i);
else if (i < 0)
	printf("%d is negative\n", i);
else
	printf("%d is zero\n", i);
return;
}
