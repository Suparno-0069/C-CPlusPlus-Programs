#include<stdio.h>
#define SIZE 10
int main()
{
	int a[SIZE][SIZE], b[SIZE][SIZE], ans[SIZE][SIZE], c1, c2, r1, r2, i, j;
	printf("Enter the row and column of the 1st matrix : ");
	scanf("%d %d", &c1, &r1);
	printf("Enter the row and column of the 2nd matrix : ");
	scanf("%d %d", &c2, &r2);
	printf("\nEnter the 1st matrix : ");
	for(i = 0; i < r1; i++)
		for(j = 0; j < c1; j++)
			scanf("%d", &a[i][j]);
	printf("\nThe 1st matrix : ");
	for(i = 0; i < r1; i++)
		for(j = 0; j < c1; j++)
		{
			printf("%d\t", a[i][j]);
			printf("\n");
		}
	
	printf("\nEnter the 2nd matrix : ");
	for(i = 0; i < r2; i++)
		for(j = 0; j < c2; j++)
			scanf("%d", &b[i][j]);
	printf("\nThe 2nd matrix : ");
	for(i = 0; i < r2; i++)
		for(j = 0; j < c2; j++)
		{
			printf("%d\t", b[i][j]);
			printf("\n");
		}
	
	for(i = 0; i < r2; i++)
		for(j = 0; j < c2; j++)
			ans[i][j] = a[i][j] * b[i][j];
	printf("\nAnswer  matrix : ");
	for(i = 0; i < r2; i++)
		for(j = 0; j < c2; j++)
			{
				printf("%d\t", ans[i][j]);
				printf("\n");
			}
	return 0;
}
