#include<stdio.h>
#define student 10

int main() {
	int grade[student];
	int sum = 0;
	int i, average;

	for (i = 0; i < student; i++)
	{
		printf("�л����� ������ �Է��ϼ���:");
		scanf("%d", &grade[i]);

	}
	for (i = 0; i < student; i++)
		sum = sum + grade[i];

	average = sum / student;
	printf("�������=%d\n", average);

	return 0;
}