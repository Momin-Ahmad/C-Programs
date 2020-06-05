#include<stdio.h>
int power(int x, int y);
int main()
{
	for (int i = 1; i <= 10; i++){
		printf("%d", fibonacci(i));
		puts("");
	}
	system("pause");
}
int fibo(int x){
	if (x == 1 || x == 2){ return 1; }
	else{ return (fibonacci(x - 1) + fibonacci(x - 2)); }
}