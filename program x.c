#include <stdio.h>
int main()
{
	int integer;
	printf(" Enter a 5-digit number!\n");
	scanf_s("%d", &integer);
	int first_digit = integer / 10000;
	printf("%d\n", first_digit);
	int remainder1 = integer % 10000;
	int second_digit = remainder1 / 1000;
	printf("%d\n", second_digit);
	int remainder2 = remainder1 % 1000;
	int third_digit = remainder2 / 100;
	printf("%d\n", third_digit);
	int remainder3 = remainder2 % 100;
	int fourth_digit = remainder3 / 10;
	printf("%d\n", fourth_digit);
	int remainder4 = remainder3 % 10;
	int fifth_digit = remainder4 / 1;
	printf("%d\n", fifth_digit);
	int remainder5 = remainder4 % 1;

	
	system("pause");

}