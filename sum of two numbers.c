#include <stdio.h>
int main(void)
{
	int a, b;
	printf("enter a number \"a\" \n");
	scanf_s("%d", &a );
	printf("enter a number \"b\" \n");
	scanf_s("%d", &b);
	int sum = a + b;
	printf("their sum is %d\n", sum);
	system("pause");
	

}