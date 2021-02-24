#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int stack[MAX], top = -1;
void push();
void pop();
void show();
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.Push \n2.Pop \n3.Show \n4.Exit \n");
		printf("\nEnter your choice : ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: show();
					break;
			case 4: exit(0);
			defult: printf("Enter valid choice : ");
		}
	}
	return 0;
}

void push()
{
	int x;
	if(top == MAX - 1)
		printf("\nOverflow");
	else
	{
		printf("Enter the value : ");
		scanf("%d", &x);
		stack[++top] = x;
	}
}

void pop()
{
	if(top == -1)
		printf("\nUnderflow");
	else
	{
		printf("\nDeleted element is : %d", stack[top]);
		top--;
	}
}

void show()
{
	int i;
	if(top == -1)
		printf("\nStack is empty");
	else
	{
		printf("\nElements in the stack are : \n");
		for(i = top; i >= 0; i--)
		{
			printf("%d\n", stack[i]);
		}
	}
}
