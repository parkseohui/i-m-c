#include <stdio.h>
#define size 5

int main() {
	int key, i;
	int list[size] = { 1,2,3,4,5 };

	printf("탐색할 값을 입력하세요:");
	scanf("%d", &key);
	for (i = 0; i < size; i++)
		if (list[i] == key)
			printf("탐색성공 인덱스=%d\n", i);
	printf("탐색종료\n");
	return 0;
}