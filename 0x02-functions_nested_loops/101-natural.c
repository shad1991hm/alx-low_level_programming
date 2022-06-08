#incude<stdio.h>

/**
 * main - Start here
 * Return: Alawys 0;
 */
int main(void)
{
	int i, sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	print("%d\n", sum);
	return (0);
}
