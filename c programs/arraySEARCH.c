#include<stdio.h>
#define SIZE 20
int main()
{
	int n, i, s, c = 0, a[SIZE];
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	printf("\nEnter the array elements : \n");
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	printf("\nThe array elements are : \n");
	for(i=0; i<n; i++)
		printf("%d\t", a[i]);
	printf("\nEnter the elements to be searched : ");
	scanf("%d", &s);
	for(i=0; i<n; i++)
	{
		if(s == a[i])
		{
			printf("\nThe element is present in the position %d", (i+1));
			c++;
			break;
		}
	}
	if(c == 0)
		printf("\nThe element is not present in the array");
	return 0;
}
