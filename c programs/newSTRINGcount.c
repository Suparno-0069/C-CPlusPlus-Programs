#include<stdio.h>
int main()
{
	char a[300];
	int p=0, w=0, v=0, c=0, l=0, s=0, i;
	printf("Enter the string : ");
	scanf("%c", &a[0]);
	
	for(i = 0; a[i] != '\0';)
	{
		if(a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U')
			v++;
		
		else if(a[i] == ' ')
			w++;
		else if(a[i] == '\n')
		{
			if(a[i-1]== '.')
				p++;
			l++;
			
		}
		else if(a[i] == '.')
		{
			w++;
			s++;
		}
		else
			c++;
		i++;
		scanf("%c", &a[i]);
	}
	
	printf("\nNumber of vowel : %d", v);
	printf("\nNumber of words : %d", (w));
	printf("\nNumber of sentence : %d", (s));
	printf("\nNumber of paragraph : %d", p);
	printf("\nNumber of consonant : %d", c);
	printf("\nNumber of line : %d", l);
	return 0;
}
