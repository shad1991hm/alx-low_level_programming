#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Start here
 * Return: Always 0
 */
int main(void)
{
	char pc[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(pc[i]);
	}
	putchar('\n');
	return (0);
}
