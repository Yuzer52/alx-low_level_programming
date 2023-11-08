#include "function_pointers.h"

/**
  * print_name - It will Prints a name
  * @name: Is The name to prints
  * @f: Is the Pointer to function
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
