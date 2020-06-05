#include <stdio.h>
int main()
{
	printf("enter two numbers a and b separated by a space\n");
	float a = 0;
	float b = 0;
	scanf_s("%f %f", &a, &b);
	//summation
	float sum = a + b;
	printf("a+b=%10.4f\n", sum);
	//difference
	float difference = a - b;
	printf("a-b=%10.4f\n", difference);
	//product
	float product = a*b;
	printf("a*b=%10.4f\n", product);
	//division
	float division = a / b;
	if (b != 0){
		printf("a/b=%10.4f\n", division);
	}
	else{ printf("cannot divide by zero!!\n"); }
	//remainder
	int c = a;
	int d = b;
	if (d != 0){
		printf("a%%b=%5d\n", c%d);
	}
	system("pause");
}