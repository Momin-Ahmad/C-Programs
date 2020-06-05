#include<stdio.h>
#include<stdlib.h>
#define size 10
int main(){
	int myArray[size] = { 3, 6, 7, 3, 9, 8, 10, 1, 2, 4 };
	printf("The array with random, unsorted entries is:\n");
	for (int i = 0; i < size; i++){
		printf("%2d ", myArray[i]);
		if ((i + 1) % 10 == 0){ puts(""); }
	}
	puts("");
	int partition = myArray[size / 2];
	printf("The random partition number is:%d \n", partition);
	int temp[size];
	int i = 1; int j = 0;
	for (int a = 0; a < size; a++){
		if (myArray[a] <= partition){
			if (myArray[a] == partition){ temp[partition-1] = partition; }
			else{
				temp[j] = myArray[a]; j++;
			}
			}
		else{ temp[size -i] = myArray[a]; i++; }
	}
	for (int m = 0; m < size; m++){
		printf("%2d ", temp[m]);
		if ((m + 1) % 10 == 0){ puts(""); }
	}
	printf("Using insertion sort, we get:\n");
	for (int m = 0; m < size; m++){
		printf("%2d ", myArray[m]);
		if ((m + 1) % 10 == 0){ puts(""); }
	}
	puts("");
	system("pause");
}