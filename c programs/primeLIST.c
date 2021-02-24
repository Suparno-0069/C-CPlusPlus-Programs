#include<stdio.h>
int main()
{
	int u, l, i, n, c;
	printf("\nEnter the range : ");
	scanf("%d %d", &l, &u);
	printf("\nPrime numbers between %d and %d are : \n", l, u);
	n=1;
	while(n <= u)
	{
		c=0;
		for(i=2; i<n; i++)
		{
			if(n%i == 0)
				c++;
		}
		if(c==0)
			printf("%d\t", n);
			n++;
	}
	return 0;
}
