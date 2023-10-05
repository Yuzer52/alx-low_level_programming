#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	 float f;
	  char c;
	long int l;
	long long int x;
	
	

	printf("The Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("The Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("The Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
