#include<stdio.h>
int gcd(int x, int y);
int main()
{
	int a = 2; int b = 6;
	printf("%d\n", gcd(a, b));
	system("pause");
}
int gcd(int x, int y){
	if (y == 0){ return x; }
	else{ return gcd(y, x%y); }
}