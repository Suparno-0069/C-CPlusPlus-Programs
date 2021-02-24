#include<stdio.h>
#define SIZE 20
int main()
{
	int a[SIZE][SIZE], c, r, i, j;
	printf("\nEnter number of rows and columns of Matrix : ");
	scanf("%d %d", &r, &c);
	printf("\nEnter the elements for the matrix : \n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			scanf("%d", (*(a+i)+j));
	}
	printf("\nThe matrix is : \n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			printf("%d\t", *(*(a+i)+j));
		printf("\n");
	}
	
	printf("\nThe transposed matrix is : \n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			printf("%d\t", *(*(a+j)+i));
		printf("\n");
	}
	return 0;
}
