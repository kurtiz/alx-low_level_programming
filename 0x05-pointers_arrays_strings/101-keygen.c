#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int rnd;
	int counter;
	int sum;

	srand(time(NULL));
	for (counter = 0, sum = 2772; sum > 122; counter++)
	{
		rnd = (rand() % 125) + 1;
		printf("%c", rnd);
		sum -= rnd;
	}
	printf("%c\n", sum);

	return (0);
}
