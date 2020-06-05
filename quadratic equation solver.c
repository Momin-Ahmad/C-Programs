#include <stdio.h>
#include <math.h>
/*Quadratic Equation Solver*/
/*created on 8 october 2017*/
int main()
{
	printf("enter values of a b and c!\n");
	float a, b, c;
	scanf_s("%f %f %f", &a, &b, &c);
	if(a!=0){
		float d = (float)pow(b, 2);
		float e = d - (4 * a*c);
		if (e < 0){ printf("imaginary solution!\n"); }
		else{
			float f = sqrt(e);
			float x1 = (-b + f) / (2 * a);
			float x2 = (-b - f) / (2 * a);
			printf("x1=%f\nx2=%f\n", x1, x2);
		}
	}
	if (a == 0){
		float x = -c / b;
		printf("x=%f\n", x);
	}
		system("pause");
}