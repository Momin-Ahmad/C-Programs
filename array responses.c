#include<stdio.h>
# define resSize 40
# define freqSize 11
int main()
{
	size_t rating;
	size_t answer;
	int frequency[freqSize] = { 0 };
	int responses[resSize] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3,
			8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };
	for (answer = 0; answer < resSize; answer++){
		frequency[responses[answer]]++;
	}
	printf("Rating\tFrequency\n");
	for (rating = 1; rating < freqSize; rating++){
		printf("%d\t%d\t", rating, frequency[rating]);
		for (int k = 1; k <= frequency[rating]; k++){ printf("*"); }
		puts("");
	}
	system("pause");
}