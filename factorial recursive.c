#include<stdio.h>
long double fac(int x);
int main()
{
	for (int i = 1; i <= 20; i++){
		printf("%.0Lf", fac(i));
		puts("");
	}
	system("pause");
}
long double fac(int x)
{
	if (x == 1 || x == 0){ return 1; }
	else{ return x*fac(x - 1); }
}