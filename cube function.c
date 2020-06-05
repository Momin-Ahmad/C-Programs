#include <stdio.h>
int cube(int y);
int main()
{
	puts("enter a number you wish to cube:");
	int x;
	scanf_s("%d", &x);
	int cu = cube(x);
	printf("%d\n", cu);
	system("pause");
}
int cube(int y)
{
	return y*y*y; 
}