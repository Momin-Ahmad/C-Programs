#include<stdio.h>
float calculateCharges(float x);
int main()
{
	printf("Car\tHours\tCharges\n");
	for (int i = 1; i <= 3; i++){
		printf("Enter number of hours you have parked your car:");
		float hours;
		scanf_s("%f", &hours);
		printf("%d\t%f\t%f\n", i, hours, calculateCharges(hours));
	}
	system("pause");
}
float calculateCharges(float x){
	float charges;
	if (x <= 3){
		charges = 2;
	}
	if (x > 3){
		float addH = x - 3;
		charges = 2 + addH / 2;
		if (charges > 10){ charges = 10; }
	}
	return charges;
}