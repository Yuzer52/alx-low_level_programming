#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - addition
  * @a: variable a
  * @b: variable b
  *
  * Return: a+b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - The function subtraction
  * @a: variable a
  * @b: variable b
  *
  * Return: a-b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - The function multiplication
  * @a: variable a
  * @b: variable b
  *
  * Return: a*b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - the function divide
  * @a: variable a
  * @b: variable b
  *
  * Return: a/b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - The function modules
  * @a: variable a
  * @b: variable b
  *
  * Return: a%b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
