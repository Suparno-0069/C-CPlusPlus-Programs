#include<stdio.h>
#define SIZE 20
int main()
{
	int a[SIZE][SIZE], i, j, r, c;
	printf("\nEnter the number of rows and columns : \n");
	scanf("%d %d", &r, &c);
	printf("\nEnter the elements : \n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			scanf("%d", &a[i][j]);
	}
	printf("\nThe entered Matrix is : \n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	return 0;
}
