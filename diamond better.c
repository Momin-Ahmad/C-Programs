#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int j = 1; j <= n; j++)
	{
		for (int i = 1; i <= n; i++)
		{
			if ((i + j == n - 2) || (j - i == n - 4) || (i - j == n - 4)||(i+j==n+4)){
				printf("*");
			}
			else{ printf(" "); }
		}
		printf("\n");
	}

	system("pause");
}