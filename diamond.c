#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int j = 1; j <= n; j++)
	{
		for (int k = n-1; k >= j; k--)
		{
			printf(" ");
		}
		
		for (int i = 1; i<=n; i++)
		{
			if (i==1){
				printf("*");}
			}
		for (int l = 1; l <= j-1; l++){ 
			
			printf("-");}
		if (j > 1){ printf("*"); }
		printf("\n");
	}
	
	system("pause");
}