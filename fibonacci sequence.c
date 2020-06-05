#include <stdio.h>
int main()
{
	printf("   fibonacci\n   series\t");
	printf("golden ratio\n");
	int a = 0;
	int b = 1;
	printf("%9.0d\n", a);
	printf("%9.0d\n", b);
	float sum = 0;
	while (sum < 100000){
		sum = a + b;
		printf("%9.0f\t%f\n", sum, sum/b);
		a = b;
		b = sum;
	}
	
	system("pause");
}