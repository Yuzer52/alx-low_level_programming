#include "main.h"
#include <stdio.h>

/**
  * main - Will Prints the number of args
  * @argc: It's argument count
  * @argv: It's argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

