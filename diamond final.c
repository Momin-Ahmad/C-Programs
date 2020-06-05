#include<stdio.h>
int main()
{
	puts("Enter number of rows to b printed!");
	int n;
	scanf_s("%d", &n);
	if (n % 2 == 0){ n = n + 1; }
	int x = (n+1) / 2;
	for (int j = 1; j <= n; j++)
	{
		for (int i = 1; i <= n; i++)
		{
			if ((i + j == x + 1) || (j - i == x - 1) || (i - j == x - 1) || (i + j == n + x)){
				printf("*");
			}
			else{ printf(" "); }
		}
		printf("\n");
	}

	system("pause");
}