#include<stdio.h>
#define SIZE 10
void display(int ar[SIZE][SIZE], int r, int c)
{
	int i, j;
	printf("\nThe Matrix is : \n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			printf("%d\t", ar[i][j]);
		printf("\n");
	}
}

int main()
{
	int a[SIZE][SIZE], b[SIZE][SIZE], d[SIZE][SIZE], c1, c2, r1, r2, i, j, k;
	printf("\nEnter number of rows and columns of 1st Matrix : ");
	scanf("%d %d", &r1, c1);
	printf("\nEnter number of rows and columns of 2nd Matrix : ");
	scanf("%d %d", &r2, c2);
	
	while(c1 != r2)
	{
		printf("\nMatrix Multiplication is not possible as column of 1st Matrix not equal to row of 2nd Matrix");
		printf("\nEnter column and row again for both Matrixs.");
		printf("\nEnter number of rows and columns of 1st Matrix : ");
		scanf("%d %d", &r1, c1);
		printf("\nEnter number of rows and columns of 2nd Matrix : ");
		scanf("%d %d", &r2, c2);
	}
	
	printf("\nEnter the elements : \n");
	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c1; j++)
			scanf("%d", &a[i][j]);
	}
	display(a, r1, c1);
	
	printf("\nEnter the elements : \n");
	for(i = 0; i < r2; i++)
	{
		for(j = 0; j < c2; j++)
			scanf("%d", &b[i][j]);
	}
	display(b, r2, c2);
	
	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c2; j++)
		{
			d[i][j] = 0;
			for(k = 0; k < c1; k++)
			{
				d[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	printf("\nAfter MULTIPLICATION \n");
	display(d, r1, c2);
	return 0;
}
