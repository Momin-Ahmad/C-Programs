#include<stdio.h>
	int main()
	{
		int n;
		puts("enter a number");
		scanf_s("%d", &n);
		for (int j = 1; j <= n+1; j++){
			for (int i = n ; i >= j; i--)
			{
				printf(" ");
			}
			for (int k = 1; k <= j; k++)
			{
				printf("%d ", k);
			}
			printf("\n");
		}
		system("pause");
	}
	
	
