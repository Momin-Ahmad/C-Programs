//Game of life
#define rows 35
#define columns 85
char grid[rows][columns] = { 0 };
char temp[rows][columns] = { 0 };
char randPattern[rows][columns] = { 0 };
char block[4][4] = { { ' ', ' ', ' ', ' ' },
					{ ' ', '*', '*', ' ' },
					{ ' ', '*', '*', ' ', },
					{ ' ', ' ', ' ', ' ' } };
char boat[5][5] = { { ' ', ' ', ' ', ' ', ' ' },
					{ ' ', '*', '*', ' ', ' ' },
					{ ' ', '*', ' ', '*', ' ' },
					{ ' ', ' ', '*', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ' } };
char loaf[6][6] = { { ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', '*', '*', ' ', ' ' },
					{ ' ', '*', ' ', ' ', '*', ' ' },
					{ ' ', ' ', '*', ' ', '*', ' ' },
					{ ' ', ' ', ' ', '*', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ' }, };
char beehive[5][6] = { { ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', '*', '*', ' ', ' ' },
					{ ' ', '*', ' ', ' ', '*', ' ' },
					{ ' ', ' ', '*', '*', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ' }, };
char blinker[5][5] = { { ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ' },
					{ ' ', '*', '*', '*', ' ' },
					{ ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ' } };
char beacon[6][6] = { { ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', '*', '*', ' ', ' ', ' ' },
					{ ' ', '*', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', '*', ' ' },
					{ ' ', ' ', ' ', '*', '*', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ' } };
char toad[6][6] = { { ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', '*', '*', '*', ' ' },
					{ ' ', '*', '*', '*', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ' } };
char pulsar[17][17] = { { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', '*', '*', '*', ' ', ' ', '*', '*', ' ', '*', '*', ' ', ' ', '*', '*', '*', ' ' },
					{ ' ', ' ', ' ', '*', ' ', '*', ' ', '*', ' ', '*', ' ', '*', ' ', '*', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', '*', ' ', '*', ' ', '*', ' ', '*', ' ', '*', ' ', '*', ' ', ' ', ' ' },
					{ ' ', '*', '*', '*', ' ', ' ', '*', '*', ' ', '*', '*', ' ', ' ', '*', '*', '*', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' } };
char cross[10][10] = { { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', '*', '*', '*', '*', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ' },
					{ ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', ' ' },
					{ ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ' },
					{ ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ' },
					{ ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', ' ' },
					{ ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', '*', '*', '*', '*', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' }, };
char octagon[8][8] = { { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', '*', '*', '*', '*', ' ', ' ' },
					{ ' ', '*', ' ', '*', '*', ' ', '*', ' ' },
					{ ' ', '*', '*', ' ', ' ', '*', '*', ' ' },
					{ ' ', '*', '*', ' ', ' ', '*', '*', ' ' },
					{ ' ', '*', ' ', '*', '*', ' ', '*', ' ' },
					{ ' ', ' ', '*', '*', '*', '*', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' }, };
char glider[5][5] = { { ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', '*', ' ', ' ' },
					{ ' ', ' ', ' ', '*', ' ' },
					{ ' ', '*', '*', '*', ' ' },
					{ ' ', ' ', ' ', ' ', ' ' } };
char spaceship[7][9] = { { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ' },
					{ ' ', ' ', '*', ' ', ' ', ' ', '*', ' ', ' ' },
					{ ' ', ' ', ' ', '*', '*', '*', '*', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' }, };
char gun[11][38] = { { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ' },
					{ ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '*', ' ', '*', '*', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
					{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' } };
char dieHard[5][10] = { { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ' },
{ '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
{ ' ', '*', ' ', ' ', ' ', ' ', '*', '*', '*', ' ' },
{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' } };
char pentomino[5][5] = { { ' ', ' ', ' ', ' ', ' ' },
{ ' ', ' ', '*', '*', ' ' },
{ ' ', '*', '*', ' ', ' ' },
{ ' ', ' ', '*', ' ', ' ' },
{ ' ', ' ', ' ', ' ', ' ' } };
#include<stdio.h>
#include<Windows.h>
#include <conio.h>
void colour(void);
void menu(void);
void playGame(void);
void printBlock(char b[][4]);
void printBoat(char b[][5]);
void printLoaf(char b[][6]);
void printBeehive(char b[][6]);
void printBlinker(char b[][5]);
void printBeacon(char b[][6]);
void printToad(char b[][6]);
void printPulsar(char b[][17]);
void printCross(char b[][10]);
void printOctagon(char b[][8]);
void printGlider(char b[][5]);
void printSpaceship(char b[][9]);
void printGun(char b[][18]);
void printDiehard(char b[][10]);
void printPentomino(char b[][5]);
void printRand(void);
void initGrid(char a[][columns]);
void printGrid(char a[][columns]);
void sweeper(void);
void loop(int x);

int main(){
	initGrid(grid);
	colour();
	menu();
	//printBlock(block);
	//printBoat(boat);
	//printLoaf(loaf);
	//printBeehive(beehive);
	//printBlinker(blinker);
	//printBeacon(beacon);
	//printToad(toad);
	//printPulsar(pulsar);
	//printCross(cross);
	//printOctagon(octagon);
	//printGlider(glider);
	//printSpaceship(spaceship);
	//printGun(gun);
    //printDiehard(dieHard);
	//printPentomino(pentomino);
	//printRand();
	/*printGrid(grid);
	sweeper();						//creates next gen on temporary array
	Sleep(500);
	getchar();
	system("cls");
	
	printGrid(temp);

	loop();
	puts("");*/
	system("pause");

}
void colour(void){
	puts("Which colour scheme do you want?");
	printf("1. white background and blue text\n");
	printf("2. light yellow background and black text\n");
	printf("3. light aqua backgroud and red text\n");
	printf("4. white background and black text\n");
	printf("5. black background and white text\n");
	int x;
	scanf_s("%d", &x);
	switch (x){
	case 1:
		system("COLOR F1");
		break;
	case 2:
		system("COLOR E0");
		break;
	case 3:
		system("COLOR B4");
	
	case 4:
		system("COLOR F0");
	default:
		break;
	}
	puts("");
	fflush(stdin);
}
void menu(void){
	system("cls");		//clear the screen
	printf("---------------------------------\n");
	printf("           WELCOME TO            \n");
	printf("|  John Conway's Game of Life  |\n");
	printf("---------------------------------\n\n\n");
	printf("Select your choice\n");
	printf("1.Start Game\n");
	printf("2.About Game ?\n");
	printf("3.Quit\n");
	int choice;
	scanf_s("%d", &choice);
	switch (choice){
	case 1:
		playGame();
		break;
	case 2:
		system("cls");
		printf("\n\n");
		printf("What is the Game of Life?\n");
		printf("=========================\n\n");
		printf("The Game of Life is a cellular-automation, zero-player game\n");
		printf("developed by John Conway in 1970. The game is played on an infinite grid\n");
		printf("of square cells(one cell is equivalent to one character\nspace in our console application\n");
		printf("The evolution of cells(dead or alive) is determined\nby the initial state of the grid\n");
		printf("the initial state is a called a seed or initial pattern.\nEach step in the evolution is\n");
		printf("called a generation or a tick.\n");
		printf("Rules.\n");
		printf("-----\n\n");

		printf("Each cell interacts with it 8 neighbours in the following ways\n");
		printf("1. A cell will be born iff it has 3 live neighbours\n");
		printf("2. A cell will die iff it has neighbours > 3 or < 2\n");
		printf("3. A cell will survive iff it has 2 or 3 neighbours\n\n");
		printf("in this game we weill give our best to show u how a cell generates");
		printf("\nenjoy the game\n");
		system("pause");
		getchar();
		menu();
		break;
	case 3:
		system("cls");
		printf("Thank you for playing the game!\n");
		system("pause");
		break;
	default:
		menu();
		break;
	}
}
void playGame(void){
	int choice, gen;
	system("CLS");
	puts("How do you want to initialize the grid?");
	puts("1.The Block");
	puts("2.The Boat");
	puts("3.The Loaf");
	puts("4.The Beehive");
	puts("5.The Blinker");
	puts("6.The Beacon");
	puts("7.The Toad");
	puts("8.The Pulsar");
	puts("9.The Glider");
	puts("10.The Spaceship");
	puts("11.The Cross");
	puts("12.The Octagon");
	puts("13.The Gun");
	puts("14.The Diehard");
	puts("15.Ther Pentomino");
	puts("16. Random Pattern");
	do
	{

		printf("What is your choice: ");
		scanf_s("%d", &choice);

		if (choice > 16 || choice < 1)
			printf("\aInvalid Choice!\n");


	} while (choice > 16 || choice < 1);

	printf("please input number of generations to be taken ");
	scanf_s("%d", &gen);
	switch (choice){
	case 1:
		printBlock(block);
		break;
	case 2:
		printBoat(boat);
		break;
	case 3:
		printLoaf(loaf);
		break;
	case 4:
		printBeehive(beehive);
		break;
	case 5:
		printBlinker(blinker);
		break;
	case 6:
		printBeacon(beacon);
		break;
	case 7:
		printToad(toad);
		break;
	case 8:
		printPulsar(pulsar);
		break;
	case 9:
		printGlider(glider);
		break;
	case 10:
		printSpaceship(spaceship);
		break;
	case 11:
		printCross(cross);
		break;
	case 12:
		printOctagon(octagon);
		break;
	case 13:
		printGun(gun);
		break;
	case 14:
		printDiehard(dieHard);
		break;
	case 15:
		printPentomino(pentomino);
		break;
	case 16:
		printRand();
		break;
	default:
		break;
	}
	fflush(stdin);
	printGrid(grid);
	sweeper();						//creates next gen on temporary array
	Sleep(500);
	getchar();
	system("cls");

	printGrid(temp);

	loop(gen);
	menu();
}
void initGrid(char a[][columns]){
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			a[i][j] = 0;
		}
	}
}
void printGrid(char a[][columns])
{
	for (int k = 0; k <= columns; k++)
	{
		printf("_");
	}
	puts("");
	for (int i = 0; i < rows; i++)
	{
		printf("|");
		for (int j = 0; j < columns; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("|");
		puts("");
	}
	for (int g = 0; g <= columns; g++){
		printf("~");
	}
}
void printBlock(char b[][4]){
	for (int i = 18; i < 22; i++){
		for (int j = 39; j < 43; j++){
			grid[i][j] = b[i - 18][j - 39];
		}
	}
}
void printBoat(char b[][5]){
	for (int i = 18; i < 23; i++){
		for (int j = 39; j < 44; j++){
			grid[i][j] = b[i - 18][j - 39];
		}
	}
}
void printLoaf(char b[][6]){
	for (int i = 18; i < 24; i++){
		for (int j = 39; j < 45; j++){
			grid[i][j] = b[i - 18][j - 39];
		}
	}
}
void printBeehive(char b[][6]){
	for (int i = 18; i < 23; i++){
		for (int j = 39; j < 45; j++){
			grid[i][j] = b[i - 18][j - 39];
		}
	}
}
void printBlinker(char b[][5]){
	for (int i = 18; i < 23; i++){
		for (int j = 39; j < 44; j++){
			grid[i][j] = b[i - 18][j - 39];
		}
	}
}
void printBeacon(char b[][6]){
	for (int i = 18; i < 24; i++){
		for (int j = 39; j < 45; j++){
			grid[i][j] = b[i - 18][j - 39];
		}
	}
}
void printToad(char b[][6]){
	for (int i = 18; i < 24; i++){
		for (int j = 39; j < 45; j++){
			grid[i][j] = b[i - 18][j - 39];
		}
	}
}
void printPulsar(char b[][17]){
	for (int i = 18; i < 35; i++){
		for (int j = 39; j < 56; j++){
			grid[i][j] = b[i - 18][j - 39];
		}
	}
}
void printCross(char b[][10]){
	for (int i = 18; i < 28; i++){
		for (int j = 39; j < 49; j++){
			grid[i][j] = b[i - 18][j - 39];
		}
	}
}
void printOctagon(char b[][8]){
	for (int i = 18; i < 26; i++){
		for (int j = 39; j < 47; j++){
			grid[i][j] = b[i - 18][j - 39];
		}
	}
}
void printGlider(char b[][5]){
	for (int i = 18; i < 23; i++){
		for (int j = 39; j < 44; j++){
			grid[i][j] = b[i - 18][j - 39];
		}
	}
}
void printSpaceship(char b[][9]){
	for (int i = 18; i < 25; i++){
		for (int j = 39; j < 48; j++){
			grid[i][j] = b[i - 18][j - 39];
		}
	}
}
void printGun(char b[][38]){
	for (int i = 10; i < 21; i++){
		for (int j = 10; j < 48; j++){
			grid[i][j] = b[i - 10][j - 10];
		}
	}
}
void printDiehard(char b[][10]){
	for (int i = 18; i < 23; i++){
		for (int j = 39; j < 49; j++){
			grid[i][j] = b[i - 18][j - 39];
		}
	}
}
void printPentomino(char b[][5]){
	for (int i = 18; i < 23; i++){
		for (int j = 39; j < 44; j++){
			grid[i][j] = b[i - 18][j - 39];
		}
	}
}
void printRand(void){
	srand(time(NULL));
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			int k = rand() % 2;
			if (k == 0){ grid[i][j] = ' '; }
			else{ grid[i][j] = '*'; }
		}
	}
}
void sweeper(void)
{
	for (int i = 0; i < 35; i++)
	{
		for (int j = 0; j < 85; j++)
		{
			int count = 0;
			for (int k = -1; k < 2; k++)
			{
				for (int l = -1; l < 2; l++)
				{
					if ((grid[(i +k+ rows) % rows][(j +l+ columns) % columns] == '*') && (k != 0 || l != 0))
					{
						count++;
					}

				}
			}
			if (count == 3 && grid[i][j ] == ' '){
				temp[i][j] = '*';
			}
			if ((count == 2 || count == 3) && grid[i][j] == '*'){
				temp[i][j] = '*';
			}
			if (count > 3 && grid[i ][j] == '*'){
				temp[i][j] = ' ';
			}
			if (count < 2 && grid[i][j] == '*'){
				temp[i][j] = ' ';
			}
			if (count < 3 && grid[i][j ] == ' '){
				temp[i][j] = ' ';
			}
			if (count>3 && grid[i][j] == ' '){
				temp[i][j] = ' ';
			}
		}
	}
}
void loop(int x){
	for (int i = 0; i <= x; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			for (int k = 0; k < columns; k++)
			{
				grid[j][k] = temp[j][k];
			}
		}
		for (int j = 0; j < rows; j++)
		{
			for (int k = 0; k < columns; k++)
			{
				temp[j][k] = ' ';
			}
		}
		sweeper();

		//getchar();
		//Sleep(100);
		system("cls");

		printGrid(temp);
	}
	getchar();
}