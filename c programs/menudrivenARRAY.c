#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
void search()
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
}

void reverse()
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
	
}

void add()
{
	int n, i, s = 0, avg, a[SIZE];
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	printf("\nEnter the array elements : \n");
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	printf("\nThe array elements are : \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", a[i]);
		s += a[i];
	}
	avg = s/n;
	printf("\nSum of the array is : %d", s);
	printf("\nAverage of the array is : %f", (float)avg);
}

void copy()
{
	int i, n, a[SIZE], b[SIZE];
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	printf("\nEnter the array elements : \n");
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	printf("\nThe array elements are : \n");
	for(i=0; i<n; i++)
		printf("%d\t", a[i]);
	printf("\nAfter copying, element of second array are : \n");
	for(i=0; i<n; i++)
	{
		b[i] = a[i];
		printf("%d\t", b[i]);
	}
}

void minMax()
{
	int i, n, l, s, a[SIZE];
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	printf("\nEnter the array elements : \n");
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	printf("\nThe array elements are : \n");
	for(i=0; i<n; i++)
		printf("%d\t", a[i]);
	l = a[0];
	s = a[0];
	for(i=0; i<n; i++)
	{
		if(l < a[i])
			l = a[i];
		else if(s > a[i])
			s = a[i];
	}
	printf("\n\nLargest of this array is : %d", l);
	printf("\n\nSmallest of this array is : %d", s);
}

int main()
{
	int ch;
	while(1)
	{
		printf("\n\nEnter 1 for ADD, \nEnter 2 for REVERSE, \nEnter 3 for COPY, \nEnter 4 for MINIMUM & MAXIMUM, \nEnter 5 for SEARCH and \nEnter 6 for EXIT");
		printf("\nEnter your CHOICE : ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				add();
				break;
			case 2:
				reverse();
				break;
			case 3:
				copy();
				break;
			case 4:
				minMax();
				break;
			case 5:
				search();
				break;
			case 6:
				printf("\nRETURN TO HOME");
				exit(0);
		}
	}
	return 0;
}
