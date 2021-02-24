#include<stdio.h>
int main()
{
	int rows, i, j, n = 1;
	printf("Enter number of Rows : ");
	scanf("%d", &rows);
	for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= rows; j++);
			printf("  ");
		for(j = 1; j <= i; ++j)
		{
			printf("  %2d  ", n);
			n++;
		}
		printf("\n");
	}
	return 0;
}
