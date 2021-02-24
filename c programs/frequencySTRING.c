#include<stdio.h>
#include<string.h>
int main()
{
	char a[30], b[30], chr, ch;
	int i, j, n, c = 0;
	printf("Enter the string : ");
	gets(a);
	n = strlen(a);
	chr = ch = a[0];
	for(i = 0; i < n; i++)
	{
		if(i > 0 && chr != a[i])
			ch = a[i];
		for(j = i; a[j] != '\0'; j++)
			if(ch == a[j])
			{
				c++;
				a[j] = chr;
			}
		if(ch != chr || i == 0)
			if(c)
				printf("%c comes %d times.\n", ch, c);
		c = 0;
	}
	return 0;
}
