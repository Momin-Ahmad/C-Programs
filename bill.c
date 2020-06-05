#include <stdio.h>
int main()
{
	printf("\t\tWelcome to the online portal for bill payment\n");
	int balance = 12440;
	int ebill;
	int gbill;
	printf("enter amount of electricity bill to be paid\n");
	scanf_s("%d", &ebill);
	printf("enter amount of gas bill to be paid\n");
	scanf_s("%d", &gbill);
	int total = ebill + gbill;
	int num = 0;
	if (ebill > balance && gbill > balance){ printf("You do not have enough balance to pay any of the bills\n"); }
	else{
		if (total > balance){
			printf("the total bill has exceeded the total balance\n");
			printf("would you like to pay the lesser of the two bills?");
			printf(" Press 1 for yes and 2 for no\n");
			scanf_s("%d", &num);
			if (num == 1){
				if (ebill > gbill){ printf("The gas bill has been paid. Your remaining balance is %d\n", (balance - gbill)); }
				if (gbill > ebill){ printf("The electricity bill has been paid. Your remaining balance is %d\n", balance - ebill); }
				if (gbill == ebill){ printf("Since both bills were equal, we have paid the gas bill. your remaining balance is %d\n", balance - gbill); }
				printf("Thank you for visiting us\n");
			}
			if (num == 2){ printf("Thank you for visiting us\n"); }
		}
		if (total <= balance){
			printf("Both bills have been paid. Your remaining balance is %d\n", (balance - gbill - ebill));
			printf("Thank you for visiting us\n");
		}
		
	}
	system("pause");
}