#include<stdio.h>
int main()
{
	int n;
	puts("enter a number");
	scanf_s("%d", &n);
	for (int j = 1; j <= n; j++){
		for (int i = n-1; i>=j; i--)
		{
			printf("-");
		}
		for (int k = 1; k <= j; k++)
		{
			printf("%d", j);
		}
		printf("\n");
	}	
	system("pause");
}