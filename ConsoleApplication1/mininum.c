#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10

int main() {
	int prices[size] = { 0 };
	int i, minimum;

	printf("1 2 3 4 5 6 7 8 9 10\n");
	srand((unsigned)time(NULL));
	for (i = 0; i < size; i++) {
		prices[i] = (rand() % 100) + 1;
		printf("%d", prices[i]);

	}
	printf("\n\n");
	minimum = prices[0];

	for (i = 1; i < size; i++)
	{
		if (prices[i] < minimum)
			minimum = prices[i];

	}
	printf("최소값은 %d입니다.\n", minimum);
	return 0;
}