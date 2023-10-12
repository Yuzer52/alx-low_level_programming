#include "main.h"

/**
  * _isupper - Check if a letter is upper
  * @c: The number to be checked
  *
  * Return: 1 if c is upper case or 0 for any else
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}

