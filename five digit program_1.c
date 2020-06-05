//five digit separation program
#include <stdio.h>
int main()
{
	printf("Enter a five digit number!\n");
	int integer;
	scanf_s("%d", &integer);
	int d1 = integer / 10000;
	int d2 = integer % 10000 / 1000;
	int d3 = integer % 10000 % 1000 / 100;
	int d4 = integer % 10000 % 1000 % 100 / 10;
	int d5 = integer % 10000 % 1000 % 100 % 10 / 1;
	printf("%d\n%d\n%d\n%d\n%d\n", d1, d2, d3, d4, d5);
	system("pause");
}