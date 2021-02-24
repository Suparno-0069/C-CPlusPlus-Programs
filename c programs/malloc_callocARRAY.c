#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, n, *ptr, sum = 0;
	printf("\nEnter number of elements : ");
	scanf("%d", &n);
	//ptr = (int *) malloc(n * sizeof(int));
	ptr = (int *) calloc(n, sizeof(int));
	if(ptr == NULL)
	{
		printf("\nError! Memory not allocated.");
		exit(0);
	}
	printf("\nEnter Elements : \n");
	for(i = 0; i < n; i++)
	{
		scanf("%d", ptr + i);
		sum += *(ptr + i);
	}
	printf("\nSum = %d", sum);
	free(ptr);
	return 0;
}
