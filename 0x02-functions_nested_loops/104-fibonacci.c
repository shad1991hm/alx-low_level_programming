#include<stdio.h>

/**
 * main - Start here
 * Return: Always 0;
 */
int main(void)
{
	unsigned long int i, j, k, j1, j2, k1, k2;

	j = 1;
	k = 2;
	printf("%u", j);
	for (i = 1; i < 91; i++)
	{
		printf(", %u", k);
		k = k + j;
		j = k - j;
	}
	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;
	for (i = 92; i < 99; i++)
	{
		printf(", %u", k1 + (k2 / 1000000000));
		printf("%u", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	printf("\n");
	return (0);
}
