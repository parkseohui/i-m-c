#include<stdio.h>
#define class 3
#define student 5

int main() {
	int s[class][student] = {
		{0,1,2,3,4},
		{10,11,12,13,14},
		{20,21,22,23,24}
	};
	int clas, stu, total, subtotal;

	total = 0;
	for (clas = 0; clas<class; clas++) {
		subtotal = 0;
		for (stu = 0; stu < student; stu++)
			subtotal = subtotal + s[class][student];
		printf("학급%d의 평균성적=%d\n", clas, subtotal / stu);
		total = total + subtotal;
	}
	printf("전체학생들의 평균성적=%d\n", total / (class*student));
	return 0;
}