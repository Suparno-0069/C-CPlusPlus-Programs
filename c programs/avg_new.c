#include<stdio.h>
double getAverage(int *arr, int size);

int main()
{
	int a[10], n, i;
	double avg;
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	printf("Enter %d number of elements in the array : \n", n);
	for(i = 0; i<n; i++)
		scanf("%d", &a[i]);
	avg = getAverage(a, n);
	printf("Average value is : %.2f\n", avg);
	return 0;
}

double getAverage(int *ar, int size)
{
	int i, sum = 0;
	double avg;
	for(i = 0; i<size; i++)
		sum += ar[i];
	avg = (double)sum / size;
	return avg;
}
