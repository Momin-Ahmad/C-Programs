#include<stdio.h>
int main()
{
	int r, rows, columns;
	printf("Enter the radius of the circle: ");
	fflush(stdin);
	scanf_s("%d", &r);
	if (r % 2 == 1)
	{
		for (rows = -r; rows <= r; rows++)
		{
			for (columns = -r; columns <= r; columns++)
			{
				if (rows*rows + columns*columns < r*r)
					printf("* ");
				else
					printf("  ");
			}
			puts("");
		}
	}
	else
	{
		r++;
		for (rows = -r; rows <= r-1; rows++)
		{
			for (columns = -r; columns <= r-1; columns++)
			{
				if ((rows+r)*(rows+r) + (columns+r)*(columns+r) < r*r)
					printf("* ");
				else
					printf("  ");
			}
			puts("");
		}
	}
	system("pause");
}