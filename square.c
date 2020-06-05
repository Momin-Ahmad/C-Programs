#include<stdio.h>
int main()
{
	int n;
	puts("Enter length of side of square");
	scanf_s("%d", &n);
	for (int j = 1; j <= n; j++){
		for (int i = 1; i <= n; i++){
			printf("* ", i);
		}
		printf("\n");
	}
	
	system("pause");
}