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
		printf("�б�%d�� ��ռ���=%d\n", clas, subtotal / stu);
		total = total + subtotal;
	}
	printf("��ü�л����� ��ռ���=%d\n", total / (class*student));
	return 0;
}