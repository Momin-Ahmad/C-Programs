/*Grading System*/
#include <stdio.h>
int main()
{
	int marks;
	printf("Enter your marks percentage\n");
	scanf_s("%d", &marks);

	if (marks < 50){
		printf("You have failed in your exam\n");
	}

	if (marks < 60 && marks>=50){
		printf("You have obtained D grade\n");
	}
	if (marks < 70 && marks>=60){
		printf("You have obtained C grade\n");
	}
	if (marks < 80 && marks>=70){
		printf("You have obtained B grade\n");
	}
	if (marks < 90 && marks>=80){
		printf("You have obtained A grade\n");
	}
	if (marks <= 100 && marks>=90){
		printf("Congratualtions! You have obtained A+ grade\n");
	}
	system("pause");
}