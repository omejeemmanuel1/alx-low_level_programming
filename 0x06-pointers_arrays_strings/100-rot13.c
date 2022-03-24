#include "main.h"

/**
* rot13 - rotate characters 13 places in the alphabet
* @s: the string to encode
*
* Description: Each letter is replaced with the 13th letter after it.
* Return: pointer to the encoded string
*/
char *rot13(char *s)
{
	char *c;
	char shift;

	for (c = s; *c; ++c)
	{
		shift = 'A' + (*c & 32);
		if (('a' <= *c && *c <= 'z') || ('A' <= *c && *c <= 'Z'))
			*c = (*c - shift + 13) % 26 + shift;
	}

	return (s);
}

