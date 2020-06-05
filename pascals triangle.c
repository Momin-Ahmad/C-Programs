#include<stdio.h>
float fac(float x);
int main(){
	puts("Enter the number of rows:");
	float rows;
	scanf_s("%f", &rows);
	for (float j = 1; j <= rows; j++){
		for (float k = rows - 1; k >= j; k--){
			printf("   ");
		}
		for (float i = 1; i <= j; i++){
			printf("%3.0f   ", fac(j-1)/(fac(j-i)*fac(i-1)));
		}
		puts("");
	}
	system("pause");
}
float fac(float x){
	if (x == 1||x==0){ return 1; }
	else{ return x*fac(x - 1); }
}
