#include<stdio.h>
#define student 10

int main() {
	int grade[student];
	int sum = 0;
	int i, average;

	for (i = 0; i < student; i++)
	{
		printf("학생들의 성적을 입력하세요:");
		scanf("%d", &grade[i]);

	}
	for (i = 0; i < student; i++)
		sum = sum + grade[i];

	average = sum / student;
	printf("성적평균=%d\n", average);

	return 0;
}