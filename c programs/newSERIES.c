#include<stdio.h>
int main()
{
	int n, i;
	float s = 0.0;
	printf("Enter the n th term : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		s += (float)1/i;
	printf("%f", s);
	return 0;
}
