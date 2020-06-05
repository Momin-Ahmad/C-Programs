#include<stdio.h>
#include<stdlib.h>
int min = 0;
void initArray(int c[], int e);
void printArray(int d[], int f);
int recursiveMinimum(int a[], int b);
int main(){
	int size = 10;
	int myArray[10] = { 0 };
	initArray(myArray, size);
	printArray(myArray, size);
	int min = recursiveMinimum(myArray, size);
	printf("The minimum value in the array is %d\n", min);
	system("pause");
}
void initArray(int c[], int e){
	srand(time(NULL));
	for (int i = 0; i < e; i++){
		c[i] = 1 + rand() % 9;
	}
}
void printArray(int d[], int f){
	for (int k = 0; k < f; k++){
		printf("%d ", d[k]);
	}
	puts("");
}
int recursiveMinimum(int a[], int b){

	
	if (b == 1){ return a[0]; }
	else{
		if (a[0]>a[b-1]){
			int temp = a[0];
			a[0] = a[b-1];
			a[b-1] = temp;
			recursiveMinimum(a, b - 1);
		}
		else{ recursiveMinimum(a, b-1); }
		
	}
}
