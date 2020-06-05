#include <stdio.h>
int main()
{
	printf("enter an alphabet\n");
	char al;
	scanf_s("%c", &al);
	if ((al >= 65&&al<=90) || (al>=97&&al <= 122))//checks if it is an alphabet
	{
		if ((al == 65) || (al == 69) || (al == 73) || (al == 79) || (al == 85)||(al==97)||(al==101)||(al==105)||(al==111)||(al==117)){
			printf("the alphabet you have entered is a vowel\n");
		}
		else{ printf("the alphabet you have entered is a consonant\n"); }
	}
	else{ printf("you have not entered an alphabet\n"); }


	system("pause");
}