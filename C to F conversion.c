#include <stdio.h>
int main()
{
	float C, F;
	printf(" Enter temperature in Celcius\n");
	scanf_s("%f", &C);
	F = (9*C)/5 + 32;
	printf("%f\n", F);
	
	
	
	system("pause");

}