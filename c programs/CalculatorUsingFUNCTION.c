#include<stdio.h>
#include<stdlib.h>
int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mlt(int a, int b)
{
	return (a * b);
}

int divQ(int a, int b)
{
	return (a / b);
}

int rem(int a, int b)
{
	return (a % b);
}

int main()
{
	int a, b, ch;
	while(1)
	{
		printf("\n\nEnter 1 for ADD, \nEnter 2 for SUBTRACTION, \nEnter 3 for MULTIPLICATION, \nEnter 4 for DIVISION, \nEnter 5 for REMAINDER and \nEnter 6 for EXIT");
		printf("\n\nEnter your CHOICE : ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the value of A & B  :   ");
				scanf("%d %d", &a, &b);
				printf("\n\nA + B  is : %d", add(a, b));
				break;
			case 2:
				printf("\nEnter the value of A & B  :   ");
				scanf("%d %d", &a, &b);
				printf("\n\nA - B is  : %d", sub(a, b));
				break;
			case 3:
				printf("\nEnter the value of A & B  :   ");
				scanf("%d %d", &a, &b);
				printf("\n\nA * B is  : %d", mlt(a, b));
				break;
			case 4:
				printf("\nEnter the value of A & B  :   ");
				scanf("%d %d", &a, &b);
				printf("\n\nA / B is  : %d", divQ(a, b));
				break;
			case 5:
				printf("\nEnter the value of A & B  :   ");
				scanf("%d %d", &a, &b);
				printf("\n\nA % B is  : %d", rem(a, b));
				break;
			case 6:
				printf("\n\nRETURN TO HOME");
				exit(0);
		}
	}
	return 0;
}
