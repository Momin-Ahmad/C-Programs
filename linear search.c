#include<stdio.h>
#define size 10
void initArray(int c[]);
void printArray(int d[]);
int linearSearch(int a[], int b);
int main(){
	int myArray[size] = { 1, 2, 3, 5, 5, 6, 7, 8, 9, 10 };
	//initArray(myArray);
	printArray(myArray);
	int key;
	puts("Enter the value you want to search for:");
	scanf_s("%d", &key);
	int x = linearSearch(myArray, key);
	if (x == -1){
		printf("The value you requested was not found!\n");
	}
	system("pause");
}
void initArray(int c[]){
	for (int i = 0; i < size; i++){
		c[i] =i* 2;
	}
}
void printArray(int d[]){
	for (int k = 0; k < size; k++){
		printf("%d ", d[k]);
	}
}
int linearSearch(int a[], int b){
	int x = -1;
	for (int j = 0; j < size; j++){
		if (a[j] == b){
			printf("The value %d was found in the %d place\n", b, j);
			x++;
		}
	}
	return x;
}