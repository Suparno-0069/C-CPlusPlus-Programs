#include<stdio.h>
void bubble_sort(int arr[], int n);
int check_sorted(int arr[], int n);
void lin_search(int arr[], int n, int s);
void bin_search(int arr[], int n, int s);
int main()
{
	int ch, n ,i, a[20], s;
	printf("Enter the size of the array : ");
	scanf("%d", &n);
	printf("\nEnter the array elements : ");
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("\nThe entered array is : \n");
	for(i = 0; i < n; i++)
		printf("%d\t", a[i]);
	printf("\nEnter the element to be searched : ");
	scanf("%d", &s);
	printf("\nEnter 1 for Linear Search, \nEnter 2 for Binarry Searched.");
	printf("\nEnter your choice : ");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1: lin_search(a, n, s);
				break;
		case 2: if(!check_sorted(a, n))
					bubble_sort(a, n);
				bin_search(a, n, s);
				break;
	}
}

void bubble_sort(int arr[], int n)
{
	int i, j, temp;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int check_sorted(int arr[], int n)
{
	int sorted = 1, i;
	for(i = 0; i < n; i++)
	{
		if(arr[i+1] < arr[i])
		{
			sorted = 0;
			break;
		}
	}
	return sorted;
}

void lin_search(int arr[], int n, int s)
{
	int i, k = 0;
	for(i = 0; i < n; i++)
	{
		if(arr[i] == s)
		{
			printf("\nElement found at %d th position.", i+1);
			k++;
		}
	}
	if(k == 0)
		printf("\nElement not found.");
}

void bin_search(int arr[], int n, int s)
{
	int l = 0, r, m;
	r = n-1;
	while(l <= r)
	{
		m = (l + r)/2;
		if(arr[m] == s)
		{
			printf("\nElement found at %d th position.", m+1);
			break;
		}
		else if(arr[m] > s)
			r = m-1;
		else
			l = m+1;
	}
	if(l > r)
		printf("\nElement not found.");
}
