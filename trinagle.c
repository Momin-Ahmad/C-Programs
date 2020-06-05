#include<stdio.h>
int main()
{
	//checks whether input 3 sides can form a triangle or not, also tells type of triangle
	printf("Enter lengths of three sides separated by spaces\n");
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == b&&a == c){ 
		printf("The given sides form an equilateral triangle\n"); 
	}
	else{
		if (a > b&&a > c&&a < b + c){
			printf("Given sides can form a triangle\n");
			if (b == c){
				printf("The triangle is isosceles\n");
			}
			else {
				printf("The trinagle is scalene\n");
			}
		}
		else if (b>c&&b < a + c){
			printf("Given sides can form a triangle\n");
			if (a == c){
				printf("The triangle is isosceles\n");
			}
			else {
				printf("The trinagle is scalene\n");
			}
		}
		else if (c < a + b){
			printf("Given sides can form a triangle\n");
			if (b == a){
				printf("The triangle is isosceles\n");
			}
			else {
				printf("The trinagle is scalene\n");
			}
		}
		else puts("Invalid");
	}
	system("pause");
}