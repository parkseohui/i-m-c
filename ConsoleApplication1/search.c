#include <stdio.h>
#define size 5

int main() {
	int key, i;
	int list[size] = { 1,2,3,4,5 };

	printf("Ž���� ���� �Է��ϼ���:");
	scanf("%d", &key);
	for (i = 0; i < size; i++)
		if (list[i] == key)
			printf("Ž������ �ε���=%d\n", i);
	printf("Ž������\n");
	return 0;
}