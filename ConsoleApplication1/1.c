#include<stdio.h>
int fact(int n) {
	printf("fact(%d)\n", n);
	if (n <= 1)
		return 1;
	else return (n*fact(n - 1));
}
int main() {
	int num = 5;
	int f;
	f = fact(num);
	printf("%d!=%d\n", num, f);
	return 0;
}