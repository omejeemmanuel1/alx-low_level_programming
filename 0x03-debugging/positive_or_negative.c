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

	int num = i;

	srand(time(0));
	num = rand() - RAND_MAX / 2;

	if (num > 0)
		printf("%i is positive\n", num);
	else if (num < 0)
		printf("%i is negative\n", num);
	else
		printf("%i is zero\n", num);

}
