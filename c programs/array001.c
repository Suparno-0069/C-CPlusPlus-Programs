#include<stdio.h>
#define SIZE 10
int main()
{
	int a[SIZE], i, n;
	printf("\nEnter the size of the array : \n");
	scanf("%d", &n);
	printf("\nEnter the elements : \n");
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("\nthe aray elements are : \n");
	for(i = 0; i < n; i++)
		printf("%d\t", a[i]);
	return 0;
}
