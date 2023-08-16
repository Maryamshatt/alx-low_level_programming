#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "j-calc.h"

/**
 * main - prints the result of simple operation
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	num1 = atol(argv[1]);
	op = argv[2];
	num2 = atol(argv[3]);

	if (get_oo_func(op) == NULL || op[1] != '\0')
	{
		prinf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||
		(*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);	
}
