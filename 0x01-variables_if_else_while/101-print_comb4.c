#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		j = i + 1;

		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				if (i == '7' && j == '8' && k == '9')
					break;
				putchar(',');
				putchar(' ');
				k++;
			}
			j++;
		}
	}
	putchar('\n');
	return (0);
}
