/*Matchsticks Game */
#include<stdio.h>
main(void)
{
	int counter = 21, user, comp;  // x is not initialized here do it in the loop
	printf("Welcome to the Matchstick game\n who ever gets to pick the last matchstick loses\n");
	printf("if u enter a wrong number at the start, you will get a chance\nbut if you enter wrong number in the middle you will not be given another chance\n");
	printf("Enter the number of matchsticks greater or equal to 1 and less than or equal to 4\n");
	scanf_s("%d", &user);
	if (user <= 4 && user >= 1){
		while (counter > 0)
		{
			counter = counter - user;
			int x = 0;
			if (counter % 5 == 0){ comp = 1; }
			else{
				while (counter % 5 != 0)
				{
					counter = counter - 1;
					x++;
					comp = x;
				}
			}
			printf("The number computer selected is %d \n", comp);
			printf("The total matchsticks left  are %d\n", counter);
			for (int i = counter; i > 0; i--){ printf("|"); }
			puts("");
			puts("Its the turn of the user again. Please give a number");

			scanf_s("%d", &user);
			if (user > 4 || user < 1)
			{
				counter = 0;
			}
		}
		if (counter == 0){
			printf("GAME ENDED , U LOSE\n");
		}
	}
	else{
		printf("You entered a wrong number,enter again \n");
		scanf_s("%d", &user);
		if (user <= 4 && user >= 1){
			while (counter > 0)
			{
				counter = counter - user;
				int x = 0;
				if (counter % 5 == 0){ comp = 1; }
				else{
					while (counter % 5 != 0)
					{

						counter = counter - 1;

						x++;
						comp = x;
					}
				}
				printf("The number computer selected is %d \n", comp);
				printf("The total matchsticks are %d\n", counter);
				for (int i = counter; i > 0; i--){ printf("|"); }
				puts("");
				puts("Its User Turn, please give a number");

				scanf_s("%d", &user);
			}
			if (user > 4 || user < 1)
			{
				counter = 0;
			}
			if (counter == 0){
				printf("ooopsss \n GAME OVER \n YOU LOST\n");
			}
		}
	}
	system("pause");

}
