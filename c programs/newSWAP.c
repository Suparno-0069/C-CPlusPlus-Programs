#include<stdio.h>
int main()
{
	int a, b, temp;
	int* p, *q;
	printf("Enter the value of a : ");
	scanf("%d", &a);
	printf("\nEnter the value of b : ");
	scanf("%d", &b);
	
	p = &a;
	q = &b;
	printf("\nValue before swap : \n a : %d, b : %d", *p, *q);
	temp= *p;
	*p = *q;
	*q = temp;
	printf("\nValue after swap : \n a : %d, b : %d", *p, *q);
}
