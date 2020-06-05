#include<stdio.h>
#define size 100
void mean(const unsigned int answer[]);
void median(unsigned int answer[]);
void mode(unsigned int freq[], unsigned const int answer[]);
void bubbleSort(int a[]);
void printArray(unsigned const int a[]);
// function main begins program execution
int main(void)
{
	unsigned int frequency[10] = { 0 }; // initialize array frequency
	srand(time(NULL));
	// initialize array response

	unsigned int response[size];
	for (int i = 0; i < size; i++){
		response[i] = 1 + rand() % 9;
	}
	/* { 1, 1, 3, 4, 5, 6, 7, 8, 9
	, 1, 2, 3, 4, 5, 6, 7, 8, 9
	, 1, 2, 3, 4, 5, 6, 7, 8, 9
	, 1, 2, 3, 4, 5, 6, 7, 8, 9
	, 1, 2, 3, 4, 5, 6, 7, 8, 9
	, 1, 2, 3, 4, 5, 6, 7, 8, 9
	, 1, 2, 3, 4, 5, 6, 7, 8, 9
	, 1, 2, 3, 4, 5, 6, 7, 8, 9
	, 1, 2, 3, 4, 5, 6, 7, 8, 9
	, 1, 2, 3, 4, 5, 6, 7, 8, 9
	, 1, 2, 3, 4, 5, 6, 7, 8, 9 };*/

	// process responses
	mean(response);
	median(response);
	mode(frequency, response);
	system("pause");
} // end main
void mean(const unsigned int answer[]){
	size_t j; // counter for totaling array elements
	unsigned int total = 0; // variable to hold sum of array elements

	printf("%s\n%s\n%s\n", "********", " Mean", "********");

	// total response values
	for (j = 0; j < size; ++j) {
		total += answer[j];

	} // end for

	printf("The mean is the average value of the data\n"
		"items. The mean is equal to the total of\n"
		"all the data items divided by the number\n"
		"of data items ( %u ). The mean value for\n"
		"this run is: %u / %u = %.4f\n\n",
		size, total, size, (double)total / size);

} // end function mean}
void median(unsigned int answer[]){
	// sort array and determine median element's value
	printf("\n%s\n%s\n%s\n%s",
		"********", " Median", "********",
		"The unsorted array of responses is");

	printArray(answer); // output unsorted array

	bubbleSort(answer);

	printf("%s", "\n\nThe sorted array is");
	printArray(answer); // output sorted array

	if (size % 2 != 0){ // display median element
		printf("\n\nThe median is element %u of\n"
			"the sorted %u element array.\n"
			"For this run the median is %u\n\n",
			size / 2, size, answer[size / 2]);
	}
	else{
		float a = answer[size / 2 - 1]; float b = answer[size / 2];
		float average = (a + b) / 2;
		printf("\n\nThe median is the middle element of an array.\n"
			"Here we have even number of elements so there are two middle elements\n"
			"Therefore we have taken average of the two.\n"
			"They are the %u and %u elements for the %u element array.\n"
			"For this run the median is %.1f", size / 2, size / 2 + 1, size, average);
	}
} // end function median
void mode(unsigned int freq[], unsigned const int answer[]){
	size_t rating; // counter for accessing elements 1-9 of array freq
	size_t j; // counter for summarizing elements 0-98 of array answer
	unsigned int h; // counter for diplaying histograms freq array values
	unsigned int largest = 0; // represents largest frequency
	unsigned int modeValue = 0; // represents most frequent response

	printf("\n%s\n%s\n%s\n",
		"********", " Mode", "********");
	// initialize frequencies to 0
	for (rating = 1; rating <= 9; ++rating) {
		freq[rating] = 0;

	} // end for

	// summarize frequencies
	for (j = 0; j < size; ++j) {
		++freq[answer[j]];

	} // end for

	// output headers for result columns
	printf("%s%11s%19s\n\n%54s\n%54s\n\n",
		"Response", "Frequency", "Histogram",
		"1 1 2 2", "5 0 5 0 5");
	int modeValue2 = -1;
	// output results
	int i = 1;
	for (rating = 1; rating <= 9; ++rating) {
		printf("%8u%11u ", rating, freq[rating]);

		// keep track of mode value and largest frequency value
		if (freq[rating] >= largest) {
			if (freq[rating] > largest){
				largest = freq[rating];
				modeValue = rating;
			}

		} // end if
		// output histogram bar representing frequency value
		for (h = 1; h <= freq[rating]; ++h) {
			printf("%s", "*");

		} // end inner for

		puts(""); // being new line of output

	}// end outer for
	int k = 0;						//control variable for new array
	int modeValues[9] = { 0 };	//array containing all the modvalues
	for (int i = 1; i <= 9; i++){
		if (freq[i] == largest){
			modeValues[k] = i;
			k++;
		}
	}

	printf("The mode is the most frequent value. For this run we have mode value(s):\n");

	for (int i = 0; i < 9; i++){	//printing all the mod values!
		while (modeValues[i] != 0){
			printf("value %d which occured %u times\n", modeValues[i], largest);
			break;
		}
	}

} // end function mode
void bubbleSort(int a[]){
	unsigned int pass; // pass counter
	size_t j; // comparison counter
	unsigned int hold; // temporary location used to swap elements

	// loop to control number of passes
	for (pass = 1; pass < size; ++pass) {
		// loop to control number of comparisons per pass
		for (j = 0; j < size - 1; ++j) {

			// swap elements if out of order
			if (a[j] > a[j + 1]) {
				hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;

			} // end if

		} // end inner for

	} // end outer for

} // end function bubbleSort

// output array contents (20 values per row)

void printArray(unsigned const int a[]){
	size_t j; // counter
	// output array contents
	for (j = 0; j < size; ++j) {

		if (j % 20 == 0) { // begin new line every 20 values
			puts("");
		} // end if

		printf("%2u", a[j]);
	} // end for
}