#include<stdio.h>
#define size 10
int main(){
	float array[size] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
	float *nPtr;
	size_t i;
	for (i = 0; i < size; i++){
		printf("%.1f ", array[i]);
	}
	puts("");
	nPtr = array;
	//nPtr = &array;
	for (i = 0; i < size; i++){
		printf("%.1f ", *(nPtr+i));
	}
	puts("");
	for (i = 0; i < size; i++){
		printf("%.1f ", *(array + i));
	}
	puts("");
	for (i = 0; i < size; i++){
		printf("%.1f ", nPtr[i]);
	}
	puts("");
	printf("%.1f %.1f %.1f %.1f", array[3], *(nPtr + 3), *(array + 3), nPtr[3]);
	puts("");
	printf("%p\n", (nPtr + 8));
	printf("%.1f\n", *(nPtr + 8));
	system("pause");
}