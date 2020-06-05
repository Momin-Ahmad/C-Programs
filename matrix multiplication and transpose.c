#include<stdio.h>
#define rows 3
#define cols 3
int identity[3][3] = { { 1, 0, 0 }, { 0, 1, 0 }, { 0, 0, 1 } };
void initArray(int a[][cols]);
void printArray(int b[][cols]);
void transpose(int c[][cols], int d[rows]);
void multiply(int e[][cols], int f[][cols], int result[][cols]);
int main(){
	
	int a[rows][cols] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int b[rows][cols] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int result[cols][rows] = { 0 };
	int multiplication[rows][cols] = { 0 };
	//initArray(a);
	printArray(a);
	transpose(a, result);
	printArray(result);
	puts("");
	printArray(identity);
	puts("");
	multiply(a, b, multiplication);
	printArray(multiplication);
	system("pause");
}
void initArray(int a[][cols]){
	srand(time(NULL));
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			a[i][j] = 1 + rand() % 9;
		}
	}
}
void printArray(int b[][cols]){
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			printf("%3d ", b[i][j]);
		}
		puts("");
	}
	puts("");
}
void transpose(int c[][cols], int d[][cols]){
	puts("The transposed matrix is:");
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			d[i][j] = c[j][i];
		}
	}
}
void multiply(int e[][cols], int f[][cols], int result[][cols]){
	puts("Matrix after multiplication is:");
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			for (int k = 0; k < rows; k++){
				result[i][j] += e[i][k] * f[k][j];
			}
		}
	}
}