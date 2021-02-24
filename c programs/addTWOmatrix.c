#include<stdio.h>
#define SIZE 10
int main()
{
	int a[SIZE][SIZE], b[SIZE][SIZE], i, j, r, c;
	printf("\nEnter the number of rows and columns : \n");
	scanf("%d %d", &r, &c);
	printf("\nEnter the elements of 1st Matrix : \n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			scanf("%d", &a[i][j]);
	}
	
	printf("\nEnter the elements of 2nd Matrix : \n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			scanf("%d", &b[i][j]);
	}
	
	printf("\n1st Matrix is : \n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	
	printf("\n2nd Matrix is : \n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			printf("%d\t", b[i][j]);
		printf("\n");
	}
	
	printf("\nSum of this two matrix is : \n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			printf("%d\t", (a[i][j] + b[i][j]));
		printf("\n");
	}
	return 0;
}
