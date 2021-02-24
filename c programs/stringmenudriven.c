#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100
int main()

{
 int ch;
 char a[SIZE], b[SIZE];		
 int i, j, l=0, k=0, p=0;
 printf("\n ENTER 1 TO FIND THE LENGTH OF THE USER GIVEN STRING, \n ENTER 2 TO COPY THE STRING FROM ONE STRING TO ANOTHER, \n ENTER 3 TO CONCATENATE TWO STRING, \n ENTER 4 TO COMPARE TWO STRINGS.");
 printf("\nEnter your choice : ");
 scanf("%d",&ch);
 switch(ch)
 {
	case 1:
	  		   	
			printf("\n Enter the first string:");
			scanf("%s", a);
			//gets(a);
			for(i=0; a[i]!='\0'; i++)
				l++;
			printf("\n The length of the string is : %d",l);
			break;
			
	case 2 :
				  
			printf("\n Enter the string:");
			scanf("%s", a);
			//gets(a);
			for(i=0; a[i]!='\0'; i++)
				b[i]=a[i];
			b[i] = '\0';
			printf("\n The copied string is : %s",b);
			break;
	case 3:
		  		
			printf("\nEnter first string: ");
			scanf("%s",a);
			printf("\nEnter second string: ");
			scanf("%s",b);
			for(i=0; a[i]!='\0'; ++i); 
			 
			for(j=0; b[j]!='\0'; ++j, ++i)
				a[i]=b[j];
			a[i]='\0';
			printf("\nAfter Concatenation the string is : %s",a);
			break;
	case 4:
				
			printf("\nEnter first string: ");
			scanf("%s",a);
			printf("\nEnter second string: ");
			scanf("%s",b);
			i = 0;
			while (a[i] == b[i] && a[i] != '\0')
				i++;
			if(a[i] > b[i])
				printf("\n The strings are Different");
			else if(a[i] < b[i])
				printf("\n The strings are Different");
			else
				printf("\n The strings are Equal");
			break;
}
	return 0;
}
