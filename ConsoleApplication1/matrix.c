#include<stdio.h>
#define rows 3
#define cols 3
int main() {
	int a[rows][cols] = {
		{2,3,0},
		{8,9,1},
		{7,0,5}
	};
	int b[rows][cols] = {
		{1,0,0},
		{1,0,0},
		{1,0,0}
	};
	int c[rows][cols];
	int r, d;

	for (r = 0; r < rows; r++)
		for (d = 0; d < cols; d++)
			c[r][d] = a[r][d] + b[r][d];

	for (r = 0; r < rows; r++)
	{
		for (d = 0; d < cols; d++)
			printf("%d", c[r][d]);
		printf("\n");
	}
	return 0;
}