#include<stdio.h>
#define size 10
int main(){
	int myArray[];
	for (int i = 0; i < size; i++){
		printf("%d ", myArray[i]);
	}
	puts("");
	int temp;
	int pass;
	for (pass = 1; pass < size; ++pass){
		for (int k = 0; k < size-1; ++k){
			if (myArray[k]>myArray[k + 1]){
				temp = myArray[k];
				myArray[k] = myArray[k + 1];
				myArray[k + 1] = temp;
			}
		}
	}
	for (int m = 0; m < size; m++){
		printf("%d ", myArray[m]);
	}
	puts("");
	system("pause");
}