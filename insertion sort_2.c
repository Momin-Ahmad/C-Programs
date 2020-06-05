#include<stdio.h>
#include<stdlib.h>
void initializeArray(int a[]);
void insertionsort(int b[], int c, int e);
void printArray(const int f[]);
#define size 10
int main(){
	int myArray[size];
	initializeArray(myArray);				//initialize array
	printf("The array with random, unsorted entries is:\n");
	printArray(myArray);					//print original array
	puts("");
	int partition = myArray[size / 2];		//choose partition element
	printf("the partition element is %d\n", partition);
	int temp[size];							//creating a temporary array
	int i = 0, m = 1;						//control variables for arranging elements on either side of partition element
	for (int j = 0; j < size; j++){			//arranging elements on either side of partition element
		if (myArray[j] < partition){
			temp[i] = myArray[j];
			i++;
		}
		if (myArray[j]>partition){			//values larger than the partition element
			temp[size - m] = myArray[j];
			m++;
		}
	}
	for (int j = 0; j < size; j++){			//values equal to the partition element
		if (myArray[j] == partition){
			temp[i] = myArray[j];
			i++;
		}
	}
	for (int i = 0; i < size; i++){			//passing elements of temporary array to original array
		myArray[i] = temp[i];
	}
	printArray(temp);
	puts("");
	int Temp;
	int pass;
	for (pass = 1; pass < size; ++pass){				//using insertion sort
		insertionsort(myArray, 0, i-1);				//insertion sort on first half before partition
		insertionsort(myArray, size - m, size );		//insertion sort on second half after partition
	}
	printf("Using insertion sort separately, we get:\n");
	printArray(myArray);								//printing the sorted array
	puts("");
	system("pause");
}
void initializeArray(int a[]){							//array initialization using seeded random numbers
	srand(time(NULL));
	for (int i = 0; i < size; i++){
		a[i] = 1 + rand() % 20;
	}
}
void insertionsort(int b[], int c, int e)				//insertion sort
{

	for (int i = c; i < e; i++)
	{
		int d = i;
		while ((b[d] < b[d - 1]) && d >0)
		{
			int temp = b[d - 1];
			b[d - 1] = b[d];
			b[d] = temp;
			d--;
		}
	}

}
void printArray(const int f[]){							//function to print array
	for (int i = 0; i < size; i++){
		printf("%2d ", f[i]);
		if ((i+1) % 20 == 0){
			puts("");
		}
	}
}