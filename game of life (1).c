#define rows 35
#define columns 85
#include<stdio.h>
char *initBlock(void);
void printBlock(char[][4]);
void initGrid(char a[][columns]);
void printGrid(char a[][columns]);
char grid[rows][columns] = { 0 };
int main()
{
	char *p;
	p = initBlock();

	
	
	initGrid(grid);
	printBlock(p);
	printGrid(grid);
	puts("");
	system("pause");
}
void initGrid(char a[][columns]){
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			a[i][j] = 0;
		}
	}
}
void printGrid(char a[][columns]){
		for (int k = 0; k <= columns; k++){
		printf("_");
	}
		puts("");
		for (int i = 0; i < rows; i++){
			printf("|");
			for (int j = 0; j < columns; j++){
				printf("%c", grid[i][j]);
			}
			printf("|");
			puts("");
		}
		
	
	
	for (int g = 0; g <= columns; g++){
		printf("~");
	}
}
void printBlock(char b[][4]){
	for (int i = 17; i <21; i++){
		for (int j = 43; j < 47; j++){
			grid[i][j] = b[i - 17][j - 43];
			}
	}
}
char* initBlock(void){
	char block[17][43] = { { ' ', ' ', ' ', ' ' },
	{ ' ','43' , '43', ' ' },
	{ ' ', '43', '43', ' ', },
	{ ' ', ' ', ' ', ' ' } }; 
	return block;
}
void printBlock(char b[][4]){
	for (int i = 17; i < 22; i++){
		for (int j = 43; j < 48; j++){
			grid[i][j] = b[i - 17][j - 43];
		}
	}
}