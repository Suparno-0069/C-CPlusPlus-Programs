#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a, n, i, sum = 0;
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	a = (int *) calloc(n, sizeof(int));
	//a = (int *) malloc(n*sizeof(int));
	printf("\nEnter the elements : \n");
	for(i = 0; i < n; i++)
		scanf("%d", a+i);
	printf("\nEntered elements are :\n ");
	for(i = 0; i < n; i++)
		printf("%d\t", *a+i);
	printf("\n\nAfter Addition the value is :  ");
	for(i = 0; i < n; i++)
		sum += *(a+i);
	printf("%d", sum);
	free(a);
	return 0;
}
