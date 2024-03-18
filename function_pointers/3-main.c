#include "3-calc.h"

/**
 * main - executes functions that performs
 * simple operations
 * @argc: number of arguments to compilation
 * @argv: array of arguments to compilation
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc = get_op_func(argv[2]);

	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
