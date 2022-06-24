#include "main.h"
#include <stdlib.h>

/**
 * main - Prints the multiplication of two args numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 or 1
 */
int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
