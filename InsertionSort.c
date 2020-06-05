#include<stdio.h>
#include<stdlib.h>
#define size 50
int main(){
	int myArray[size];
	srand(time(NULL));
	for (int x = 0; x < size; x++){
		
		myArray[x] = 1 + rand() % 50;
		if ((x + 1) % 10 == 0){ puts(""); }
	}
	printf("The array with random, unsorted entries is:\n");
	for (int i = 0; i < size; i++){
		printf("%2d ", myArray[i]);
		if ((i + 1) % 10 == 0){ puts(""); }
	}
	puts("");
	int temp;
	int pass;
	for (pass = 1; pass < size; ++pass){
		for (int k = 0; k < size - 1; ++k){
			while (myArray[k]>myArray[k + 1]){
				if (myArray[k]>myArray[k + 1]){
					temp = myArray[k];
					myArray[k] = myArray[k + 1];
					myArray[k + 1] = temp;
					if ((myArray[k + 1] > myArray[k + 2]) && k < size - 2){
						temp = myArray[k + 1];
						myArray[k + 1] = myArray[k + 2];
						myArray[k + 2] = temp;
					}
				}
			}
		}
	}
	printf("Using insertion sort, we get:\n");
	for (int m = 0; m < size; m++){
		printf("%2d ", myArray[m]);
		if ((m + 1) % 10 == 0){ puts(""); }
	}
	puts("");
	system("pause");
}