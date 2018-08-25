#include<stdio.h>
#define size 5

int main() {
	int list[size] = { 3,4,2,1,5 };
	int i, j,temp, least;

	for (i = 0; i < size - 1; i++) {
		
		least = i;

		for (j = i + 1; j < size; j++)
			if (list[j] < list[least])
				least = j;
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;

		
	}

	for (i = 0; i < size; i++) {
		printf("%d", list[i]);
		printf("\n");

	}
	return 0;
}