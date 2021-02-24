#include<stdio.h>
int* arrRev()
{
	static int a[20];
	int i, j, n, temp;
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	printf("\nEnter the elements : \n");
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("\nEntered array is : \n");
	for(i = 0; i < n; i++)
		printf("%d\t", a[i]);
	j = n - 1;
	i = 0;
	while(i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
	printf("\nReversed Array from function : \n");
	for(i = 0; i < n; i++)
		printf("%d\t", a[i]);
	return a;
}
int main()
{
	int *p;
	int i, n;
	p = arrRev();
	printf("\nReversed Array from Main : \n");
	for(i = 0; i < n; i++)
		printf("%d\t", *(p+i));
	return 0;
}
