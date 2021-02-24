#include<stdio.h>
#define SIZE 20
int main()
{
	int a[SIZE][SIZE];
	int r, c, i, j;
	printf("\nEnter the row and column of the matrix : ");
	scanf("%d %d", &r, &c);
	printf("\n Enter the elements of the matrix : \n");
	for(i=0; i<r; i++)
		for(j=0;j<c;j++)
			scanf("%d", &a[i][j]);
	
	printf("\nThe elements of the matrix : \n");
	for(i=0; i<r; i++)
		{
			for(j=0;j<c;j++)
				printf("%d\t", a[i][j]);
			printf("\n");
		}
	
	printf("\nThe transpose of the matrix : \n");
	for(i=0; i<c; i++)
		{
			for(j=0;j<r;j++)
				printf("%d\t", a[j][i]);
			printf("\n");
		}
	return 0;
	
}
