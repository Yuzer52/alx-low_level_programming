#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * binary_to_uint - A function that Converts a binary number to unsigned int
  * @b: Binary string to converts
  *
  * Return: Positive number 
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			sum += 1 << count;

		count++;
	}

	return (sum);
}

/**
  * _strlen - That return Returns the length of a string
  * @s: The String to count
  *
  * Return: The String length
  */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
