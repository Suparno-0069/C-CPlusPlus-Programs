#include<stdio.h>
long long int power(int b, int p)
{
	int c=1, i;
	for(i = 1; i <= p; i++)
	{
		c *= b;
	}
	return c;
}

int main()
{
	int x, n;
	long long int r;
	printf("\n\nEnter the value of X   :   ");
	scanf("%d", &x);
	printf("\n\nEnter the value of n(positive integere)  :  ");
	scanf("%d", &n);
	r = power(x, n);
	printf("\n\nX to the power n is   :    %lld", r);
	return 0;
}
