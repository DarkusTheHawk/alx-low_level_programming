#include "main.h"

/**
 * positive_or_negative - testing if the given number is greater or less than 0
 * @i: integer
 * Return: nothing
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
