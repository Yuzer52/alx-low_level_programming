#include "main.h"
#include <stdio.h>

/**
  * main - It Prints all the args content
  * @argc: It's argument count
  * @argv: It's argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

