#include<stdio.h>
#define SIZE 20
void main()
{
	char a[SIZE];int i,l=0;
	printf("\n Enter the first string:");
	gets(a);
	for(i=0; a[i]!='\0'; i++)
	{
		l++;
	}
	printf("\n The length of the string is : %d",l);
}
