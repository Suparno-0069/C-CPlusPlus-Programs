#include<stdio.h>
int main()
{
	char str[100], rev[100];
	char *sptr = str;
	char *rptr = rev;
	int i = -1;
	printf("\n\nEnter a String : ");
	gets(str);
	while(*sptr)
	{
		sptr++;
		i++;
	}
	while(i >= 0)
	{
		sptr--;
		*rptr = *sptr;
		rptr++;
		i--;
	}
	*rptr = '\0';
	rptr = rev;
	printf("\n\nReverse of the String is : %s", rev);
	return 0;
}
