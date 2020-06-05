#include<stdio.h>
int main()
{
	float fac = 1;
	float e = 1;
	for (float n = 1; n <= 20; n++){
		fac = 1;
		for (float x = 1; x <= n; x++){
			fac = fac*x;
		}
		e = e + 1 / fac;
	}
	printf("The value of e is => %.16f\n", e);

	system("pause");

}