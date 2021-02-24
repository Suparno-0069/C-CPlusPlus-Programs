#include<stdio.h>
#define SIZE 20
int main()
{
	int i, n, a[SIZE], b[SIZE], j = 0;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	printf("\nEnter the array elements : \n");
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	printf("\nThe array elements are : \n");
	for(i=0; i<n; i++)
		printf("%d\t", a[i]);
	for(i=n-1; i>=0; i--)
		b[j++] = a[i];
	printf("\n\nElements of reversed array are : \n");
	for(i=0; i<n; i++)
		printf("%d\t", b[i]);
	return 0;
	
}
