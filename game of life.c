//Game of life
#define rows 35
#define columns 85
#include<stdio.h>
void printBlock(char b[][4]);
void initGrid(int a[][columns]);
void printGrid(int a[][columns]);

int main(){
	char block[4][4] = { { ' ', ' ', ' ', ' ' },
						{ ' ', ' * ', ' + ', ' ' },
						{ ' ', ' + ', ' + ', ' ' },
						{ ' ', ' ', ' ', ' '  } };
	printBlock(block);
	int grid[rows][columns] = { 0 };
	initGrid(grid);
	printGrid(grid);
	puts("");
	system("pause");
}
void initGrid(int a[][columns]){
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			a[i][j] = 0;
		}
	}
}
void printGrid(int a[][columns]){
	printf("\n\n\t\t");
	for (int k = 0; k <= columns; k++){
		printf("~");
	}
	puts("");
	for (int i = 0; i < rows; i++){
		printf("\t\t~");
		for (int j = 0; j < columns; j++){
			printf(" ");
		}
		printf("~");
		puts("");
	}
	printf("\t\t");
	for (int g = 0; g <= columns; g++){
		printf("~");
	}
}
void printBlock(char b[][4]){
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			printf("*");
		}
		puts("");
	}
}