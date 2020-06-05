/* This program checks whether
an integer is even or odd */

#include<stdio.h>

int main()
{
	int integer;

	printf("******************************************************\n");
	printf("***    This program tells whether an integer is    ***\n");
	printf("***    even or odd - submitted by (your name)      ***\n");
	printf("******************************************************\n");

	printf("\nEnter an integer:");
	scanf_s("%d", &integer);

	if (integer % 2 == 0){

		printf("\nThe number %d is even!\n\n", integer);
}

if (integer % 2 != 0)
{
	printf("\nThe number %d is odd!\n\n", integer);
}

system("pause");
}

