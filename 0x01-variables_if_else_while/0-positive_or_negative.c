#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * more headers goes there
 * betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf(n, "%d is positive");
	}
	else if (n == 0)
		printf(n, "%d is zero");
}
	else
	{
		printf(n, "%d is negative");
	}
	return (0);
}
