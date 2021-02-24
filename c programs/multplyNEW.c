#include<stdio.h>
void main()
{
	int i;
	printf("enter any number : ");
	scanf("%d", &i);
	int sum;
	sum = (i << 3)-i;
	printf("\n Ans : %d\n", sum);
}
