#define _CRT_SECURE_NO_WARNINGS
//LIBRARIES//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
void gotoxy(int, int);
void printheader();
int global = 0;
float callingotherfunction(float a);
void menuselection(int a);
//GENERIC FUNCTION FOR SMESTERS// 
float generic(float a[]);
//FUNCTION SHOWING SUBJECTS IN EACH SEMESTER WITH RESPECTIVE CREDIT HOURS 
void course1();
void course2();
void course3();
void course4();
void course5();
void course6();
void course7();
void course8();
void personaldetails(int a);
void print1();
void header();
//FUNCTION FOR CALCULATING GPA/CGPA IN EACH SEMESTER
float semester1(int a);
float semester2(float a);
float semester3(float a);
float semester4(float a);
float semester5(float a);
float semester6(float a);
float semester7(float a);
float semester8(float a);
float electrical(int a);
int cs(int a);
int software();

char cms[50], session[50];
char name1[100], father1[100];

int main()
{
	int static k;
	if (k == 0)
	{
		printheader();
		k++;
	}
	system("cls");
	header(0);
	menuselection(0);
	system("pause");


}
void printheader()
{
	int i;

	char ce = 219; char a = '|';
	system("cls");
	gotoxy(40, 9);
	printf("\t\tLOADING...!");
	gotoxy(40, 10);
	for (i = 0; i<26; i++)
	{
		Sleep(100);
		system("COLOR F3");
		printf("%c", ce);
	}
	system("cls");

	printf("\a\a\a\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
	printf("\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c PERSONAL TRANSCRIPT %c%c%c%c%c%c%c%c%c%c\n", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
	printf("\a\a\a\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
	system("pause");

	return;
}
void gotoxy(int x, int y)
{
	printf("%c[%d;%df", 0x1B, y, x);
}
//FUNCTION DISPLAYING MENU
void header()
{
	print1();
	printf("PLEASE SELECT YOUR DEGREE PROGRAMME FROM THE FOLLOWING AVAILABLE PROGRAMMES \n\n");
	printf("ELECTRICAL ENGINEERING \t\tPRESS 1 \nCOMPUTER SCIENCE \t\tPRESS 2 \nSOFTWARE ENGINEERING \t\tPRESS 3\n\nEXIT PROGRAMME \t\t\tPRESS 4\t\n");
	return;


}
// FUNCTION FOR MENU SELECTION 
void menuselection(int a)
{
	char static programme;
	do                                                                    //DO WHILE CONTROLLING DEGREE PROGTRAMME
	{

		scanf(" %s", &programme);                                       //ASKING USER FOR SELECTING PROGRAM 
		if (programme == '1')                                               //IF USER SELECT ELECTRICAL ENGINEERING DO FOLLOWING STEPS
		{
			printf("WELCOME TO ELECTRICAL ENGINEERING PROGRAMME\n");
			printf("PLEASE ENTER YOUR SEMESTER\n\n");
			char static semester;                                                 //GUIDING USER FOR SELECTING SEMESTER
			for (int i = 1; i <= 8; i++)
			{
				printf("SEMESTER\t%d\t\tPRESS %d TO SELECT \n", i, i);
			}
			do                                                            //DO WHILE LOOP CONTROLLING SEMESTERS 
			{
				getchar();
				scanf(" %s", &semester);                                  //ASKING USER FOR SELECTING SEMESTER

				switch (semester)
				{
				case '1':
					semester1(0);                                          //SEMESTER 1 RECIEVING NO ARGUEMENT

					break;
				case '2':
					semester2(0);                                          //SEMESTER 2 RECIEVING NO ARGUEMENT
					break;
				case '3':
					semester3(0);                                          //SEMESTER 3 RECIEVING NO ARGUEMENT
					break;
				case '4':
					semester4(0);                                          //SEMESTER 4 RECIEVING NO ARGUEMENT
					break;
				case '5':
					semester5(0);                                          //SEMESTER 5 RECIEVING NO ARGUEMENT
					break;
				case '6':
					semester6(0);                                          //SEMESTER 6 RECIEVING NO ARGUEMENT
					break;
				case '7':
					semester7(0);                                          //SEMESTER 7 RECIEVING NO ARGUEMENT
					break;
				case '8':
					semester8(0);                                          //SEMESTER 8 RECIEVING NO ARGUEMENT
					break;
				default: printf("PLEASE ENTER A VALID SEMESTER\n\n");      //IF USER ENTER WRONG INPUT
				}
				if (semester == '1' || semester == '2' || semester == '3' || semester == '4' || semester == '5' || semester == '6' || semester == '7' || semester == '8')
				{
					break;                                                 // IF USER ENTER CORRECT INPUT THEN GET OUT OF INNER WHILE LOOP FOR SEMESTER SELECTION LOOP AND THEN PROCEED FURTHUR
				}
			} while (semester != '1' || semester != '2' || semester != '3' || semester != '4' || semester != '5' || semester != '6' || semester != '7' || semester != '8');
			//ASK USER FOR INPUT UNTIL IT ENTERS CORRECT SEMESTER NUMBER 
		}
		else if (programme == '2')                                           //IF USER ENTER CS
		{
			printf("\n\n SORRY FOR INCONVINIENCE \n\nTHIS FEATURE WILL BE AVAILALBE SOON\n\nWORK IN PROGRESS\n\nTHANK YOU\n\n");
			break;

		}
		else if (programme == '3')                                           //IF USER ENTER SOFTWARE ENGINEERING
		{
			printf("\n\n SORRY FOR INCONVINIENCE \n\nTHIS FEATURE WILL BE AVAILALBE SOON\n\nWORK IN PROGRESS\n\nTHANK YOU\n\n");
			break;

		}
		else if (programme == '4')
		{
			system("cls");
			printf("\n\n\nTHANKS FOR USING THE PROGRAM\n\n\n");
			system("pause");
			exit(1);

		}
		else {
			system("cls");
			header();
			printf("\n\nPLEASE CHOOSE THE AVAILABLE DEGREES\n");      //IF USER ENTER OTHER THAN AVAILABLE DEGREES
		}
		if (programme == '1' || programme == '2' || programme == '3' || programme == '4')
		{
			break;
		}
	} while (programme != '1' || programme != '2' || programme != '3' || programme != '4');         //ASK USER FOR INPUT UNTIL IT ENTER CORRECT INPUT


	return 0;

}

//FUNCTION SHOWING INSITUTION NAME 
void print1()
{
	printf("\t\t\t\t\t       \t\t NATIONAL UNIVERSITY OF SCIENCE AND TECHNOLOGY (NUST)\t\t\t\n\n ");
	printf("\t\t\t\t\t       \t\tSCHOOL OF ELECTRICAL ENGINEERING AND COMPUTER SCIENCE\t\t\n\n");
	printf("\t\t\t\t\t		   \t\tPERSONAL TRANSCRIPT\t\t\n\n\n");
	return;
}
//FUNCTION ASKING AND STORING PERSONAL DETAIL
/*STATIC VARIABLE IS USED SO THAT IT IS INITIALIZED WITH O WHEN USER ASK FOR TRANSCRIPT AND
THEN INCREMENTED BY ONE SO THAT IT CANNOT ASK USER FOR PERSONAL DEATILS IN FURTHUR SEMESTERS AND
NOW ENTER SECOND IF STATEMENT BECAUSE IT HAS NOW STASTIC VALUE OF 1 TO SHOW PREVIOUSLY STORED PERSONAL DETAIL*/

void personaldetails(int a)
{
	int static x = 0;
	if (x == 0)
	{
		printf("\n\nPLEASE ENTER YOUR PERSONAL DETAILS\n\n");
		printf("NAME\t\t");
		scanf(" %[^\n]s", name1);
		printf("\nFATHER NAME \t\t");
		scanf(" %[^\n]s", father1);
		printf("\nCMS ID \t\t");
		scanf(" %s", cms);
		printf("\nSESSION \t\t");
		scanf(" %[^\n]s", session);
		x++;
	}
	if (a == 1)
	{

		printf("STUDENT NAME \t %s\nFATHER NAME \t %s\nCMS ID \t\t %s\nSESSION \t %s\n\n\t\t\n", name1, father1, cms, session);
	}
	return;

}

//SEMESTER 1 SUBJECTS WITH RESPECTIVE DETAILS
void course1()
{
	print1();
	printf("FOLLOWING ARE THE COURSES FOR 1ST SEMESTER\n\n");
	printf("S. No.\t\tCourse Code\t\tSubjects\t\t\t  CHs Teaching\t\t\t     CHs Labs\n1\t\tMATH101\t\tCalculus and Analytical Geometry\t\t3\t\t\t\t0\n2\t\tME104\t\tEngineering Drawing\t\t\t\t0\t\t\t\t1\n");
	printf("3\t\tHU100\t\tEnglish\t\t		\t\t2\t\t\t\t0\n4\t\tCS113\t\tIntroduction to Programming\t\t\t1\t\t\t	1\n");
	printf("5\t\tMATH121\t\tLinear Algebra and ODEs\t\t		3\t\t\t\t0\n6\t\tHU107\t\tPakistan Studies\t\t\t	2\t\t\t	0\n7\t\tPHY101\t\tApplied Physics\t\t		\t3\t\t\t\t1\n");
	return;

}
//SEMESTER 2 SUBJECTS WITH RESPECTIVE DETAILS
void course2()
{
	print1(0);
	printf("FOLLOWING ARE THE COURSES FOR 2ST SEMESTER\n\n");
	printf("S. No.\t\tCourse Code\t\tSubjects\t\t\tCHs Teaching\t\t\tCHs Labs\n1\t\tEE111\t\tLinear Circuit Analysis\t\t\t     3\t\t\t\t    1\n2\t\tME100\t\tEngineering Mechanicst\t\t\t     3\t\t\t\t    0\n");
	printf("3\t\tHU101\t\tIslamic Studies\t\t\t\t     2\t\t\t\t    0\n4\t\tME105\t\tWorkshop Practice\t\t\t     0\t\t\t	    1\n");
	printf("5\t\tMATH106\t\tMultivariable & Vector Calculus\t\t     3\t\t\t\t    0\n6\t\tCS212\t\tObject Oriented Programming (OOP)\t     3\t\t\t	    1\n\t\t\n\n");
	return;

}
//SEMESTER 3 SUBJECTS WITH RESPECTIVE DETAILS
void course3()
{
	print1(0);
	printf("FOLLOWING ARE THE COURSES FOR 3RD SEMESTER\n\n");
	printf("S. No.\t\tCourse Code\t\tSubjects\t\t\tCHs Teaching\t\t\tCHs Labs\n1\t\tEE221\t\tDigital Logic Design\t\t\t     3\t\t\t\t    1\n2\t\tCS250\t\tData Structures and Algorithmst\t\t     3\t\t\t\t    1\n");
	printf("3\t\tEE211\t\tElectrical Network Analysis		     3\t\t\t\t    1\n4\t\tME102\t\tThermodynamics\t\t\t\t     2\t\t\t	    0\n");
	printf("5\t\tMATH232\t\tComplex Variables and Transforms	     3\t\t\t\t    0\n");
	return;

}
//SEMESTER 4 SUBJECTS WITH RESPECTIVE DETAILS
void course4()
{
	print1(0);
	printf("FOLLOWING ARE THE COURSES FOR 4th SEMESTER\n\n");
	printf("S. No.\t\tCourse Code\t\tSubjects\t\t\tCHs Teaching\t\t\tCHs Labs\n1\t\tEE232\t\tSignals and Systems\t\t\t     3\t\t\t\t    1\n2\t\tEE215\t\tElectronic Devices and Circuitst\t     3\t\t\t\t    1\n");
	printf("3\t\tHU1091\t\tCommunication Skills		\t     2\t\t\t\t    0\n4\t\tEE222\t\tMicroprocessor Systems\t\t\t     3\t\t\t	    1\n");
	printf("5\t\tMATH361\t\tProbability & Statistics	\t     3\t\t\t\t    0\n");
	return;

}
//SEMESTER 5 SUBJECTS WITH RESPECTIVE DETAILS
void course5()
{
	print1(0);
	printf("FOLLOWING ARE THE COURSES FOR 5th SEMESTER\n\n");
	printf("S. No.\t\tCourse Code\t\tSubjects\t\t\tCHs Teaching\t\t\tCHs Labs\n1\t\tMATH351\t\tNumerical Methods\t\t\t     3\t\t\t\t    0\n2\t\tEE260\t\tElectrical Machines\t\t\t     3\t\t\t\t    1\n");
	printf("3\t\tE–3131\t\tElectronic Circuit Design\t\t     3\t\t\t\t    1\n4\t\tEE351\t\tCommunication Systems\t\t\t     3\t\t\t	    1\n");
	printf("5\t\tEE241\t\tElectromagnetic  Field Theory\t\t     3\t\t\t\t    0\n");
	return;

}
//SEMESTER 6 SUBJECTS WITH RESPECTIVE DETAILS
void course6()
{
	print1(0);
	printf("FOLLOWING ARE THE COURSES FOR 6th SEMESTER\t(POWER ENGINEERING)\n\n");
	printf("S. No.\t\tCourse Code\t\tSubjects\t\t\tCHs Teaching\t\t\tCHs Labs\n1\t\tEE379\t\tControl Systems\t\t\t\t     3\t\t\t\t    1\n2\t\tEE330\t\tDigital Signal Processing\t\t     3\t\t\t\t    1\n");
	printf("3\t\tECO130\t\tEngineering Economics	\t\t     2\t\t\t\t    0\n4\t\tEE 383\t\tInstrumentation and Measurements\t     3\t\t\t	    1\n");
	printf("5\t\tEE364\t\tPower Distribution and Utilization\t     3\t\t\t\t    0\n");
	return;

}
//SEMESTER 7 SUBJECTS WITH RESPECTIVE DETAILS
void course7()
{
	print1(0);
	printf("FOLLOWING ARE THE COURSES FOR 7TH SEMESTER\t(POWER ENGINEERING)\n\n");
	printf("S. No.\t\tCourse Code\t\tSubjects\t\t\tCHs Teaching\t\t\tCHs Labs\n1\t\tOTM455\t\tEngineering Project Management\t\t     2\t\t\t\t    0\n2\t\tHU212\t\tTechnical & Business Writing\t\t     2\t\t\t\t    0\n");
	printf("3\t\tEE498\t\tSenior Design Project-I	\t\t     0\t\t\t\t    2\n4\t\tEE365\t\tRenewable Energy Systems\t\t     3\t	\t\t    0\n");
	printf("5\t\tEE368\t\tPower Electronics		\t     3\t\t\t\t    1\n6\t\tEE461\t\tPower System Analysis and Design\t     3\t\t\t	    0\n\t\t\n\n");
	return;

}
//SEMESTER 8 SUBJECTS WITH RESPECTIVE DETAILS
void course8()
{
	print1(0);
	printf("FOLLOWING ARE THE COURSES FOR 8th SEMESTER\t(POWER ENGINEERING)\n\n");
	printf("S. No.\t\tCourse Code\t\tSubjects\t\t\tCHs Teaching\t\t\tCHs Labs\n1\t\tHU222\t\tProfessional Ethics\t\t\t     2\t\t\t\t    0\n2\t\tEE499\t\tSenior Design Project-II\t\t     0\t\t\t\t    4\n");
	printf("3\t\tMGT271\t\tEntrepreneurships	\t\t     2\t\t\t\t    0\n4\t\tEE482\t\tElectric Drives\t\t\t\t     3\t\t\t	    1\n");
	printf("5\t\tEE464\t\tPower Systems Protection\t\t     3\t\t\t\t    0\n");
	return;

}

float gpa[7];
char grade[5];
char sub1[5], sub2[5], sub3[5], sub4[5], sub5[5], sub6[5], sub7[5];
//GENERIC FUNCTION FOR CONTROLLING SEMESTER ACCORDING TO THEIR NUMBER OF SUBJECTS
float generic(a)
{
	int y = 0;
	int static x;
	if (a == 0)                                                           //SEMESTER 1 WITH SEVEN SUBJECTS                         
	{
		x = 7;
	}
	if (a == 1 || a == 6)                                                 //SEMESTER 2 AND 7 WITH SIX SUBJECTS 
	{
		x = 6;
	}

	if (a == 2 || a == 3 || a == 4 || a == 5 || a == 7)                   //SEMESTER 3,4,5,6 AND 8 WITH FIVE SUBJECTS 
	{
		x = 5;
	}

	for (int i = 0; i < x; i++)                                          //ASKING USER FOR GRADES IN RESPECTIVE SUBJECTS ( X TIMES REPITITION OF FOR LOOP WHICH IS EQUAL TO NUMBER OF SUBJECTS)
	{
		printf("PLEASE ENTER THE GRADE  FOR SUBJECT CORESSPONDING TO SERIAL NO %d\n\n", i + 1);
		scanf("%s", grade);
		//STORING GPA ASSOCIATED WITH RESPECTIVE GRADES IN SUBJECTS
		if (strcmp(grade, "A") == 0 || strcmp(grade, "a") == 0)
		{
			if (y == 0)                                              //STORING GRADE IN ARRAY TO PRINT IN TRANSCRIPT
			{
				strcpy(sub1, "A");
				y++;
			}
			else if (y == 1)
			{
				strcpy(sub2, "A");
				y++;

			}
			else if (y == 2)
			{
				strcpy(sub3, "A");
				y++;
			}
			else if (y == 3)
			{
				strcpy(sub4, "A");
				y++;
			}
			else if (y == 4)
			{
				strcpy(sub5, "A");
				y++;
			}
			else if (y == 5)
			{
				strcpy(sub6, "A");
				y++;
			}
			else if (y == 6)
			{
				strcpy(sub7, "A");
				y++;
			}
			gpa[i] = (float) 4.0;
			continue;                                                   //CONTINUE TO OTHER SUBJECTS IF USER ENTER CORRECT GRADE
		}

		if (strcmp(grade, "b+") == 0 || strcmp(grade, "B+") == 0)
		{
			if (y == 0)
			{
				strcpy(sub1, "B+");
				y++;
			}
			else if (y == 1)
			{
				strcpy(sub2, "B+");
				y++;

			}
			else if (y == 2)
			{
				strcpy(sub3, "B+");
				y++;
			}
			else if (y == 3)
			{
				strcpy(sub4, "B+");
				y++;
			}
			else if (y == 4)
			{
				strcpy(sub5, "B+");
				y++;
			}
			else if (y == 5)
			{
				strcpy(sub6, "B+");
				y++;
			}
			else if (y == 6)
			{
				strcpy(sub7, "B+");
				y++;
			}
			gpa[i] = (float) 3.5;
			continue;
		}
		if (strcmp(grade, "b") == 0 || strcmp(grade, "B") == 0)
		{
			if (y == 0)
			{
				strcpy(sub1, "B");
				y++;
			}
			else if (y == 1)
			{
				strcpy(sub2, "B");
				y++;

			}
			else if (y == 2)
			{
				strcpy(sub3, "B");
				y++;
			}
			else if (y == 3)
			{
				strcpy(sub4, "B");
				y++;
			}
			else if (y == 4)
			{
				strcpy(sub5, "B");
				y++;
			}
			else if (y == 5)
			{
				strcpy(sub6, "B");
				y++;
			}
			else if (y == 6)
			{
				strcpy(sub7, "B");
				y++;
			}
			gpa[i] = (float) 3.0;
			continue;
		}
		if (strcmp(grade, "C+") == 0 || strcmp(grade, "c+") == 0)
		{
			if (y == 0)
			{
				strcpy(sub1, "C+");
				y++;
			}
			else if (y == 1)
			{
				strcpy(sub2, "C+");
				y++;

			}
			else if (y == 2)
			{
				strcpy(sub3, "C+");
				y++;
			}
			else if (y == 3)
			{
				strcpy(sub4, "C+");
				y++;
			}
			else if (y == 4)
			{
				strcpy(sub5, "C+");
				y++;
			}
			else if (y == 5)
			{
				strcpy(sub6, "C+");
				y++;
			}
			else if (y == 6)
			{
				strcpy(sub7, "C+");
				y++;
			}
			gpa[i] = (float) 2.5;
			continue;
		}

		if (strcmp(grade, "c") == 0 || strcmp(grade, "C") == 0)
		{
			if (y == 0)
			{
				strcpy(sub1, "C");
				y++;
			}
			else if (y == 1)
			{
				strcpy(sub2, "C");
				y++;

			}
			else if (y == 2)
			{
				strcpy(sub3, "C");
				y++;
			}
			else if (y == 3)
			{
				strcpy(sub4, "C");
				y++;
			}
			else if (y == 4)
			{
				strcpy(sub5, "C");
				y++;
			}
			else if (y == 5)
			{
				strcpy(sub6, "C");
				y++;
			}
			else if (y == 6)
			{
				strcpy(sub7, "C");
				y++;
			}
			gpa[i] = (float) 2.0;
			continue;
		}

		if (strcmp(grade, "D") == 0 || strcmp(grade, "d") == 0)
		{
			if (y == 0)
			{
				strcpy(sub1, "D");
				y++;
			}
			else if (y == 1)
			{
				strcpy(sub2, "D");
				y++;

			}
			else if (y == 2)
			{
				strcpy(sub3, "D");
				y++;
			}
			else if (y == 3)
			{
				strcpy(sub4, "D");
				y++;
			}
			else if (y == 4)
			{
				strcpy(sub5, "D");
				y++;
			}
			else if (y == 5)
			{
				strcpy(sub6, "D");
				y++;
			}
			else if (y == 6)
			{
				strcpy(sub7, "D");
				y++;
			}
			gpa[i] = (float) 1.0;
			continue;
		}

		if (strcmp(grade, "f") == 0 || strcmp(grade, "F") == 0)
		{
			if (y == 0)
			{
				strcpy(sub1, "F");
				y++;
			}
			else if (y == 1)
			{
				strcpy(sub2, "F");
				y++;

			}
			else if (y == 2)
			{
				strcpy(sub3, "F");
				y++;
			}
			else if (y == 3)
			{
				strcpy(sub4, "F");
				y++;
			}
			else if (y == 4)
			{
				strcpy(sub5, "F");
				y++;
			}
			else if (y == 5)
			{
				strcpy(sub6, "F");
				y++;
			}
			else if (y == 6)
			{
				strcpy(sub7, "F");
				y++;
			}
			gpa[i] = (float) 0.0;
			continue;
		}
		printf("WRONG GRADE ENTERED\n\n");                                       //IF USER ENTER WRONG GRADE i IS DECREMENTED TO 0 AGAIN TO ASK USER FOR GRADE IN THAT SUBJECT AGAIN
		i--;
	}
	return 0;
}
//CALCULATING GPA OF FIRST SEMESTER BY MULTIPLYING CREDIT HOURS WITH SCORE IN RESPECTIVE SUBJECTS
float semester1(int a)
{
	system("cls");                                    //FUNCTION CALL WITHIN FUNCTION
	course1(0);
	generic (0);

	gpa[0] = (float)3 * gpa[0];
	gpa[1] = (float)1 * gpa[1];
	gpa[2] = (float)2 * gpa[2];
	gpa[3] = (float)2 * gpa[3];
	gpa[4] = (float)3 * gpa[4];
	gpa[5] = (float)2 * gpa[5];
	gpa[6] = (float)4 * gpa[6];
	float total = 0;
	for (int i = 0; i < 7; i++)
	{
		(float)total = (float)total + (float)gpa[i];
	}
	total = total / 17;
	system("cls");

	course1();
	printf("\n\nSO YOUR GPA IS %.2f\n\n", total);
	int o;
	printf("WOULD YOU LIKE TO VIEW YOUR FINAL TRANSCRIPT ?\n\nPRESS 1 TO PROCEED \n\n PRESS 2 TO DECLINE\n\n");
	scanf_s("%d", &o);                                           //OPTION FOR TRANSCRIPT
	if (o == 1)
	{
		personaldetails(0);
		system("cls");
		print1(0);
		printf("1ST SEMESTER\n\n");
		personaldetails(1);
		printf("PROGRAMME\t\t BACHELORS OF ELECTRICAL ENGINEERING \n\n");
		printf("S. No.\t\tCOURSE CODE\t\tSUBJECTS\t\t\t   COURSE POINTS\t\t   EARNED POINTS\t     GRADES\n1\t\tMATH101\t\tCalculus and Analytical Geometry\t\t12\t\t\t\t%.1f\t\t\t%s\n2\t\tME104\t\tEngineering Drawing\t\t\t\t04\t\t\t\t%.2f\t\t\t%s\n", (float)gpa[0], sub1, (float)gpa[1], sub2);
		printf("3\t\tHU100\t\tEnglish\t\t		\t\t08\t\t\t\t%.2f\t\t\t%s\n4\t\tCS113\t\tIntroduction to Programming\t\t\t08\t\t\t	%.2f\t\t\t%s\n", (float)gpa[2], sub3, (float)gpa[3], sub4);
		printf("5\t\tMATH121\t\tLinear Algebra and ODEs\t\t		12\t\t\t\t%.1f\t\t\t%s\n6\t\tHU107\t\tPakistan Studies\t\t\t	08\t\t\t	%.2f\t\t\t%s\n7\t\tPHY101\t\tApplied Physics\t\t		\t16\t\t\t\t%.1f\t\t\t%s\n", (float)gpa[4], sub5, (float)gpa[5], sub6, (float)gpa[6], sub7);
		printf("\n SEMESTER GPA  \t\t %.2f", (float)total);
		printf("\n CUMULATIVE GPA\t\t %.2f\n", (float)total);
		if ((float)total < 3.0)
		{
			printf("\n\n\nYOU SHOULD MAINTAIN A MINIMUM GPA/CGPA OF 3.00 TO AVOID PROBATION\n \n\n");
		}
	}
	char static h;
	printf("\nWOULD YOU LIKE TO CONTINUE FOR NEXT SEMESTER?\n\nPRESS 1 TO CONTINUE \nPRESS 0 TO EXIT\n\n");
	scanf(" %s", &h);
	if (h == '1')                    //USER ENTERING SMESTER 2 WITH CGPA IN PREVIOUS SMESTER AS AN ARGUEMENT
	{
		semester2((float)total);
	}
	else{
		printf("\n\nTHANK YOU \n\n");

	}
	main();

}
//CALCULATING GPA OF SECOND SEMESTER BY MULTIPLYING CREDIT HOURS WITH SCORE IN RESPECTIVE SUBJECTS
float semester2(float a)
{
	system("cls");
	course2();
	generic (1);
	gpa[0] = (float)4 * gpa[0];
	gpa[1] = (float)3 * gpa[1];
	gpa[2] = (float)2 * gpa[2];
	gpa[3] = (float)1 * gpa[3];
	gpa[4] = (float)3 * gpa[4];
	gpa[5] = (float)4 * gpa[5];
	float total = 0;
	for (int i = 0; i < 6; i++)
	{
		(float)total = (float)total + (float)gpa[i];
	}
	total = total / 17;
	system("cls");

	course2();
	printf("\n\nSO YOUR GPA IS %.2f\n\n", total);
	int o;
	printf("WOULD YOU LIKE TO VIEW YOUR FINAL TRANSCRIPT ?\n\nPRESS 1 TO PROCEED \n\n PRESS 2 TO DECLINE\n\n");
	scanf_s("%d", &o);
	float cgpa = ((float)total + (float)a) / 2;
	if (o == 1)
	{
		personaldetails(0);

		system("cls");
		print1(0);
		printf("2ND SEMESTER\n\n");
		personaldetails(1);
		printf("PROGRAMME\t\t BACHELORS OF ELECTRICAL ENGINEERING \n\n");
		printf("S. No.\t\tCOURSE CODE\t\tSUBJECTS\t\t\t   COURSE POINTS\t   EARNED POINTS       GRADES\n01\t\tEE111\t\tLinear Circuit Analysis\t\t\t\t16\t\t\t%.1f\t\t  %s\n2\t\tME100\t\tEngineering Mechanicst\t\t\t\t12\t\t\t%.1f\t\t  %s\n", gpa[0], sub1, gpa[1], sub2);
		printf("3\t\tHU101\t\tIslamic Studies\t\t		\t08\t\t\t%.2f\t\t  %s\n4\t\tME105\t\tWorkshop Practice\t\t\t\t04\t\t	%.2f\t\t  %s\n", gpa[2], sub3, gpa[3], sub4);
		printf("5\t\tMATH106\t\tMultivariable & Vector Calculus		\t12\t\t\t%.1f\t\t  %s\n6\t\tCS212\t\tObject Oriented Programming (OOP)\t\t16\t\t	%.1f\t\t  %s\n\n", gpa[4], sub5, gpa[5], sub6);
		printf("\n SEMESTER GPA  \t\t %.2f", (float)total);
		printf("\n CUMULATIVE GPA\t\t %.2f\n", (float)cgpa);
		if ((float)total < 3.0)
		{
			printf("\n\n\nYOU SHOULD MAINTAIN A MINIMUM GPA/CGPA OF 3.00 TO AVOID PROBATION \n\n");
		}
	}
	char static h;
	printf("\nWOULD YOU LIKE TO CONTINUE FOR NEXT SEMESTER?\n\nPRESS 1 TO CONTINUE \nPRESS 0 TO EXIT\n\n");
	scanf(" %s", &h);
	if (h == '1')
	{
		semester3(cgpa);                                        //RECURSIVE FUNCTION CALL TO NEXT SMESTER WITH PREVIOUS GPA AS ARGUEMENT
	}
	else{
		printf("\n\nTHANK YOU \n\n");

	}
	return 0;

}
//CALCULATING GPA OF THIRD SEMESTER BY MULTIPLYING CREDIT HOURS WITH SCORE IN RESPECTIVE SUBJECTS
float semester3(float a)

{
	system("cls");
	course3();
	generic (2);
	gpa[0] = (float)4 * gpa[0];
	gpa[1] = (float)4 * gpa[1];
	gpa[2] = (float)4 * gpa[2];
	gpa[3] = (float)2 * gpa[3];
	gpa[4] = (float)3 * gpa[4];
	float total = 0;
	for (int i = 0; i < 5; i++)
	{
		(float)total = (float)total + (float)gpa[i];
	}
	total = total / 17;
	system("cls");
	course3(0);
	printf("\n\nSO YOUR GPA IS %.2f\n\n", total);
	int o;
	printf("WOULD YOU LIKE TO VIEW YOUR FINAL TRANSCRIPT ?\n\nPRESS 1 TO PROCEED \n\n PRESS 2 TO DECLINE\n\n");
	scanf_s("%d", &o);
	float cgpa = ((float)total + a) / 2;
	if (o == 1)
	{
		personaldetails(1);
		system("cls");
		print1(0);
		printf("3RD SEMESTER\n\n");
		personaldetails(1);
		printf("PROGRAMME\t\t BACHELORS OF ELECTRICAL ENGINEERING \n\n");
		printf("S. No.\t\tCOURSE CODE\t\tSUBJECTS\t\t\t   COURSE POINTS\t\t    EARNED POINTS\t\t GRADES\n1\t\tEE221\t\tDigital Logic Design\t\t\t	16\t\t\t\t%.1f\t\t\t   %s\n2\t\tCS250\t\tData Structures and Algorithmst\t\t	16\t\t\t\t%.1f\t\t\t   %s\n", gpa[0], sub1, gpa[1], sub2);
		printf("3\t\tEE211\t\tElectrical Network Analysis			16\t\t\t\t%.1f\t\t\t   %s\n4\t\tME102\t\tThermodynamics\t\t\t\t	08\t\t\t	%.2f\t\t\t   %s\n", gpa[2], sub3, gpa[3], sub4);
		printf("5\t\tMATH232\t\tComplex Variables and Transforms		12\t\t\t\t%.1f\t\t\t   %s\n", gpa[4], sub5);
		printf("\n SEMESTER GPA  \t\t %.2f", (float)total);
		printf("\n CUMULATIVE GPA\t\t %.2f\n", cgpa);
		if ((float)total < 3.0)
		{
			printf("\n\n\nYOU SHOULD MAINTAIN A MINIMUM GPA/CGPA OF 3.00 TO AVOID PROBATION \n\n");
		}
	}
	char static h;
	printf("WOULD YOU LIKE TO CONTINUE FOR NEXT SEMESTER?\n\nPRESS 1 TO CONTINUE \nPRESS 0 TO EXIT\n\n");
	scanf(" %s", &h);
	if (h == '1')
	{
		semester4(cgpa);                                           //RECURSIVE FUNCTION CALL TO NEXT SMESTER WITH PREVIOUS GPA AS ARGUEMENT
	}
	else{
		printf("\n\nTHANK YOU \n\n");
		main();
	}
	return (float)total;
}
//CALCULATING GPA OF FOURTH SEMESTER BY MULTIPLYING CREDIT HOURS WITH SCORE IN RESPECTIVE SUBJECTS
float semester4(float a)
{
	system("cls");
	course4(0);
	generic (3);
	gpa[0] = (float)4 * gpa[0];
	gpa[1] = (float)4 * gpa[1];
	gpa[2] = (float)2 * gpa[2];
	gpa[3] = (float)4 * gpa[3];
	gpa[4] = (float)3 * gpa[4];
	float total = 0;
	for (int i = 0; i < 5; i++)
	{
		(float)total = (float)total + (float)gpa[i];
	}
	total = total / 17;
	system("cls");
	course4(0);

	printf("\n\nSO YOUR GPA IS %.2f\n\n", total);
	int o;
	printf("WOULD YOU LIKE TO VIEW YOUR FINAL TRANSCRIPT ?\n\nPRESS 1 TO PROCEED \n\n PRESS 2 TO DECLINE\n\n");
	scanf_s("%d", &o);
	float cgpa = ((float)total + a) / 2;
	if (o == 1)
	{
		personaldetails(0);

		system("cls");
		print1(0);
		printf("4TH SEMESTER\n\n");
		personaldetails(1);
		printf("PROGRAMME\t\t BACHELORS OF ELECTRICAL ENGINEERING \n\n");
		printf("S. No.\t\tCOURSE CODE\t\tSUBJECTS\t\t\tCOURSE POINTS\t\t\t    EARNED POINTS\t\t GRADES\n1\t\tEE232\t\tSignals and Systems\t\t\t	16\t\t\t\t%.1f\t\t\t   %s\n2\t\tEE215\t\tElectronic Devices and Circuitst\t	16\t\t\t\t%.1f\t\t\t   %s\n", gpa[0], sub1, gpa[1], sub2);
		printf("3\t\tHU109\t\tCommunication Skills			\t08\t\t\t\t%.2f\t\t\t   %s\n4\t\tEE222\t	Microprocessor Systems\t\t\t	16\t\t\t	%.1f\t\t\t   %s\n", gpa[2], sub3, gpa[3], sub4);
		printf("5\t\tMATH361\t\tProbability & Statistics		\t12\t\t\t\t%.1f\t\t\t   %s\n", gpa[4], sub5);
		printf("\n SEMESTER GPA  \t\t %.2f", (float)total);
		printf("\n CUMULATIVE GPA\t\t %.2f\n", cgpa);
		if ((float)total < 3.0)
		{
			printf("\n\n\nYOU SHOULD MAINTAIN A MINIMUM GPA/CGPA OF 3.00 TO AVOID PROBATION \n\n");
		}
	}
	char static h;
	printf("WOULD YOU LIKE TO CONTINUE FOR NEXT SEMESTER?\n\nPRESS 1 TO CONTINUE \nPRESS 0 TO EXIT\n\n");
	scanf(" %s", &h);
	if (h == '1')
	{
		semester5(cgpa);                                                //RECURSIVE FUNCTION CALL TO NEXT SMESTER WITH PREVIOUS GPA AS ARGUEMENT
	}
	else{
		printf("\n\nTHANK YOU \n\n");
		main();
	}
	return (float)total;
}
//CALCULATING GPA OF FIFTH SEMESTER BY MULTIPLYING CREDIT HOURS WITH SCORE IN RESPECTIVE SUBJECTS
float semester5(float a)
{
	system("cls");
	course5(0);
	generic (4);
	gpa[0] = (float)3 * gpa[0];
	gpa[1] = (float)4 * gpa[1];
	gpa[2] = (float)4 * gpa[2];
	gpa[3] = (float)4 * gpa[3];
	gpa[4] = (float)3 * gpa[4];
	float total = 0;
	for (int i = 0; i < 5; i++)
	{
		(float)total = (float)total + (float)gpa[i];
	}
	total = total / 18;
	system("cls");

	course5(0);

	printf("\n\nSO YOUR GPA IS %.2f\n\n", total);
	int o;
	printf("WOULD YOU LIKE TO VIEW YOUR FINAL TRANSCRIPT ?\n\nPRESS 1 TO PROCEED \n\n PRESS 2 TO DECLINE\n\n");
	scanf_s("%d", &o);
	float cgpa = ((float)total + a) / 2;
	if (o == 1)
	{
		personaldetails(0);

		system("cls");
		print1(0);
		printf("5TH SEMESTER\n\n");
		personaldetails(1);
		printf("PROGRAMME\t\t BACHELORS OF ELECTRICAL ENGINEERING \n\n");
		printf("S. No.\t\tCOURSE CODE\t\tSUBJECTS\t\t\tCOURSE POINTS\t\t\t    EARNED POINTS\t\t GRADES\n1\t\tMATH351\t\tNumerical Methods\t\t\t	12\t\t\t\t%.1f\t\t\t   %s\n2\t\tEE260\t\tElectrical Machines\t\t		16\t\t\t\t%.1f\t\t\t   %s\n", gpa[0], sub1, gpa[1], sub2);
		printf("3\t\tE–313\t	Electronic Circuit Design	\t\t16\t\t\t\t%.1f\t\t\t   %s\n4\t\tEE351\t	Communication Systems\t\t\t	16\t\t\t	%.1f\t\t\t   %s\n", gpa[2], sub3, gpa[3], sub4);
		printf("5\t\tEE241\t\tElectromagnetic  Field Theory\t\t\t12\t\t\t\t%.1f\t\t\t   %s\n", gpa[4], sub5);
		printf("\n SEMESTER GPA  \t\t %.2f", (float)total);
		printf("\n CUMULATIVE GPA\t\t %.2f\n", cgpa);
		if ((float)total < 3.0)
		{
			printf("\n\n\nYOU SHOULD MAINTAIN A MINIMUM GPA/CGPA OF 3.00 TO AVOID PROBATION \n\n");
		}
	}
	char static h;
	printf("WOULD YOU LIKE TO CONTINUE FOR NEXT SEMESTER?\n\nPRESS 1 TO CONTINUE \nPRESS 0 TO EXIT\n\n");
	scanf(" %s", &h);
	if (h == '1')
	{
		semester6(cgpa);                                                          //RECURSIVE FUNCTION CALL TO NEXT SMESTER WITH PREVIOUS GPA AS ARGUEMENT
	}
	else{
		printf("\n\nTHANK YOU \n\n");
		main();
	}
	return (float)total;
}
//CALCULATING GPA OF SIXTH SEMESTER BY MULTIPLYING CREDIT HOURS WITH SCORE IN RESPECTIVE SUBJECTS
float semester6(float a)

{
	system("cls");
	course6(0);
	generic (5);
	gpa[0] = (float)4 * gpa[0];
	gpa[1] = (float)4 * gpa[1];
	gpa[2] = (float)2 * gpa[2];
	gpa[3] = (float)4 * gpa[3];
	gpa[4] = (float)3 * gpa[4];

	float total = 0;
	for (int i = 0; i < 5; i++)
	{
		(float)total = (float)total + (float)gpa[i];
	}
	total = total / 17;
	system("cls");
	course6(0);

	printf("\n\nSO YOUR GPA IS %.2f\n\n", total);
	int o;
	printf("WOULD YOU LIKE TO VIEW YOUR FINAL TRANSCRIPT ?\n\nPRESS 1 TO PROCEED \n\n PRESS 2 TO DECLINE\n\n");
	scanf_s("%d", &o);
	float cgpa = ((float)total + a) / 2;
	if (o == 1)
	{
		personaldetails(0);

		system("cls");
		print1(0);

		personaldetails(1);
		printf("6TH SEMESTER  (POWER ENGINEERING)\n");
		printf("PROGRAMME\t\t BACHELORS OF ELECTRICAL ENGINEERING \n\n");
		printf("S. No.\t\tCOURSE CODE\t\tSUBJECTS\t\t\tCOURSE POINTS\t\t    EARNED POINTS\t\tGRADES\n1\t\tEE379\t\tControl Systems\t\t\t\t     16\t\t\t\t%.1f\t\t\t   %s\n2\t\tEE330\t\tDigital Signal Processing\t\t     16\t\t\t\t%.1f\t\t\t   %s\n", gpa[0], sub1, gpa[1], sub2);
		printf("3\t\tECO130\t\tEngineering Economics	\t\t     08\t\t\t\t%.2f\t\t\t   %s\n4\t\tEE383 \t\tInstrumentation and Measurements\t     16\t\t\t	%.1f\t\t\t   %s\n", gpa[2], sub3, gpa[3], sub4);
		printf("5\t\tEE364\t\tPower Distribution and Utilization\t     12\t\t\t\t%.1f\t\t\t   %s\n", gpa[4], sub5);
		printf("\n SEMESTER GPA  \t\t %.2f", (float)total);
		printf("\n CUMULATIVE GPA\t\t %.2f\n", cgpa);
		if ((float)total < 3.0)
		{
			printf("\n\n\nYOU SHOULD MAINTAIN A MINIMUM GPA/CGPA OF 3.00 TO AVOID PROBATION \n\n");
		}
	}
	char static h;
	printf("WOULD YOU LIKE TO CONTINUE FOR NEXT SEMESTER?\n\nPRESS 1 TO CONTINUE \nPRESS 0 TO EXIT\n\n");
	scanf(" %s", &h);
	if (h == '1')
	{
		semester7(cgpa);                        //RECURSIVE FUNCTION CALL TO NEXT SMESTER WITH PREVIOUS GPA AS ARGUEMENT
	}
	else{
		printf("\n\nTHANK YOU \n\n");
		main();
	}
	return (float)total;


}
//CALCULATING GPA OF SEVENTH SEMESTER BY MULTIPLYING CREDIT HOURS WITH SCORE IN RESPECTIVE SUBJECTS
float semester7(float a)
{
	system("cls");
	course7(0);
	generic (6);
	gpa[0] = (float)2 * gpa[0];
	gpa[1] = (float)2 * gpa[1];
	gpa[2] = (float)2 * gpa[2];
	gpa[3] = (float)3 * gpa[3];
	gpa[4] = (float)4 * gpa[4];
	gpa[5] = (float)3 * gpa[5];

	float total = 0;
	for (int i = 0; i < 6; i++)
	{
		(float)total = (float)total + (float)gpa[i];
	}
	total = total / 16;
	system("cls");
	course7(0);
	printf("\n\nSO YOUR GPA IS %.2f\n\n", total);
	int o;
	printf("WOULD YOU LIKE TO VIEW YOUR FINAL TRANSCRIPT ?\n\nPRESS 1 TO PROCEED \n\n PRESS 2 TO DECLINE\n\n");
	scanf_s("%d", &o);
	float cgpa = ((float)total + a) / 2;
	if (o == 1)
	{
		personaldetails(0);

		system("cls");
		print1(0);
		printf("7TH SEMESTER\t\t (POWER ENGINEERING)\n\n");
		personaldetails(1);
		printf("PROGRAMME\t\t BACHELORS OF ELECTRICAL ENGINEERING \n\n");
		printf("S. No.\t\tCOURSE CODE\t\tSUBJECTS\t\t\tCOURSE POINTS\t\t\tEARNED POINTS\t\tGRADES\n1\t\tOTM455\t\tEngineering Project Management\t\t     08\t\t\t\t   %.2f\t\t\t   %s\n2\t\tHU212\t\tTechnical & Business Writing\t\t     08\t\t\t\t   %.2f\t\t\t   %s\n", gpa[0], sub1, gpa[1], sub2);
		printf("3\t\tEE498\t\tSenior Design Project-I	\t\t     08\t\t\t\t   %.2f\t\t\t   %s\n4\t\tEE365\t\tRenewable Energy Systems\t\t     12\t	\t\t   %.1f\t\t\t   %s\n", gpa[2], sub3, gpa[3], sub4);
		printf("5\t\tEE368\t\tPower Electronics		\t     16\t\t\t\t   %.1f\t\t\t   %s\n6\t\tEE461\t\tPower System Analysis and Design\t     12\t\t\t	   %.1f\t\t\t   %s\n\t\t\n\n", gpa[4], sub5, gpa[5], sub6);
		printf("\n SEMESTER GPA  \t\t %.2f", (float)total);
		printf("\n CUMULATIVE GPA\t\t %.2f\n", cgpa);
		if ((float)total < 3.0)
		{
			printf("\n\n\nYOU SHOULD MAINTAIN A MINIMUM GPA/CGPA OF 3.00 TO AVOID PROBATION \n\n");
		}
	}
	char static h;
	printf("WOULD YOU LIKE TO CONTINUE FOR NEXT SEMESTER?\n\nPRESS 1 TO CONTINUE \nPRESS 0 TO EXIT\n\n");
	scanf(" %s", &h);
	if (h == '1')
	{
		semester8(cgpa);                                     //RECURSIVE FUNCTION CALL TO NEXT SMESTER WITH PREVIOUS GPA AS ARGUEMENT
	}
	else{
		printf("\n\nTHANK YOU \n\n");
		main();
	}
	return (float)total;


}
//CALCULATING GPA OF EIGHTH SEMESTER BY MULTIPLYING CREDIT HOURS WITH SCORE IN RESPECTIVE SUBJECTS
float semester8(float a)

{
	system("cls");
	course8(0);
	generic (7);
	gpa[0] = (float)2 * gpa[0];
	gpa[1] = (float)4 * gpa[1];
	gpa[2] = (float)2 * gpa[2];
	gpa[3] = (float)4 * gpa[3];
	gpa[4] = (float)3 * gpa[4];
	float total = 0;
	for (int i = 0; i < 5; i++)
	{
		(float)total = (float)total + (float)gpa[i];
	}
	total = total / 15;
	system("cls");
	course8(0);
	printf("\n\nSO YOUR GPA IS %.2f\n\n", total);
	int o;
	printf("WOULD YOU LIKE TO VIEW YOUR FINAL TRANSCRIPT ?\n\nPRESS 1 TO PROCEED \n\n PRESS 2 TO DECLINE\n\n");
	scanf(" %d", &o);
	float cgpa = ((float)total + a) / 2;
	if (o == 1)
	{
		personaldetails(0);

		system("cls");
		print1(0);
		printf("8TH SEMESTER\t\t (POWER ENGINEERING)\n\n");
		personaldetails(1);
		printf("PROGRAMME\t\t BACHELORS OF ELECTRICAL ENGINEERING \n\n");
		printf("S. No.\t\tCOURSE CODE\t\tSUBJECTS\t\t\tCOURSE POINTS\t\t\tEARNED POINTS\t\tGRADES\n1\t\tHU222\t\tProfessional Ethics\t\t\t     08\t\t\t\t   %.2f\t\t\t   %s\n2\t\tEE499\t\tSenior Design Project-II\t\t     16\t\t\t\t   %.1f\t\t\t   %s\n", gpa[0], sub1, gpa[1], sub2);
		printf("3\t\tMGT271\t\tEntrepreneurships	\t\t     08\t\t\t\t   %.2f\t\t\t   %s\n4\t\tEE482\t\tElectric Drives\t\t\t\t     16\t\t\t	   %.1f\t\t\t   %s\n", gpa[2], sub3, gpa[3], sub4);
		printf("5\t\tEE464\t\tPower Systems Protection\t\t     12\t\t\t\t   %.1f\t\t\t   %s\n", gpa[4], sub5);
		printf("\n SEMESTER GPA  \t\t %.2f", (float)total);
		printf("\n CUMULATIVE GPA\t\t %.2f\n", cgpa);
		if ((float)total < 3.0)
		{
			printf("\n\n\nYOU SHOULD MAINTAIN A MINIMUM GPA/CGPA OF 3.00 TO AVOID PROBATION \n\n");
		}
	}
	printf("THANK YOU\n\n\n");
	system("pause");
	main();
}

