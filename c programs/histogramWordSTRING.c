#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[100];
	int i;
	printf("Enter the string : ");
	gets(a);
	for(i = 0; a[i] != '\0'; i++)
	{
		if(a[i] == ' ' || a[i] == '\n')
			printf("\n");
		else
			printf("-");
	}
	return 0;
}
