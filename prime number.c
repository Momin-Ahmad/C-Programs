#include<stdio.h>
void prime(int x);
int main()
{
	printf("Enter a number to determine whether it is prime or not:");
	int a;
	scanf_s("%d", &a);
	prime(a);
	system("pause");
}
void prime(int x){
	int counter = 0;
	int c;
	if (x == 2){ printf("the number is prime!\n"); }
	for (int i = 2; i < x; i++){
		int c = x % i;
		if (c != 0){ counter++; }
	}
	
	if (counter == x-2){ printf("the number is prime!\n"); }
	else{ printf("the number is not prime!\n"); }
}