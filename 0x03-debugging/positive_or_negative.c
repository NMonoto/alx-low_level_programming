#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *positive_or_negative - Entry point
 *@i: The character to be checked.
 *
 *Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%i is negative\n", i);
	}

	return (0);
}
