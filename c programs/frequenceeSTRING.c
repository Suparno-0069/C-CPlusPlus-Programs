#include<stdio.h>
int main()
{
	char a[20], b[20];
	int l = 0, i, j, c = 0,q=0;
	printf("\nEnter the string : ");
	gets(a);
	for(i = 0; a[i]!='\0'; i++)
		l++;
	b[j] = '\0';
	for(i = 0; i < l; i++)
	{
		for(j = 0; j < l; j++)
		{
			b[j++]=a[i];
		}
	}
	for(i = 0; i < l; i++)
	{
		for(j = i; j < l; j++)
		{
		 if(a[j]==a[i+1])
		 c++;
		}
	}
	for(i = 0; i < l; i++)
	{
		for(j = 0; j < l; j++)
		{
			if(c>1);
		}

	return 0;
}
