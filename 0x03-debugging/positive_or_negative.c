#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

/**
* positive_or_negative - Test function that prints if integer
*				is positive or negative
* @i:Random time variable
* Return: 0
**/

void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
		printf("%i is positive\n", i);
	else if (i < 0)
		printf("%i is negative\n", i);
	else
		printf("%i is zero\n", i);

}
