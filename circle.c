#include<stdio.h>
int main()
{
	int radius;
	puts("enter radius of circle");
	scanf_s("%d", &radius);
	int z = radius * 2 - 1;
	int x, y;
	for (x = 1; x <= z; x++)
	{
		int m = x - radius;
		for (y = 1; y <= z; y++){
			int n = y - radius;
			if ((m*m) + (n*n) < (radius * radius)){
				printf(" ~");
			}
			else{ printf("  "); }
		}
		puts("");
	}
	system("pause");
}