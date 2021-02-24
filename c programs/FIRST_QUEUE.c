#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int q[MAX], front = -1, rear = -1;
void enqueue();
void dequeue();
void display();
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit \n");
		printf("\nEnter your choice : ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: enqueue();
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			defult: printf("Enter valid choice : ");
		}
	}
	return 0;
}

void enqueue()
{
	int x;
	if(rear == MAX - 1)
		printf("\nQueue is full\n");
	else
	{
		if(front == -1)
			front = 0;
		rear++;
		printf("Enter the value : ");
		scanf("%d", &x);
		q[rear] = x;
	}
}

void dequeue()
{
	if(front == -1 || front > rear)
	{
		printf("\nQueue is Underflow\n");
		exit(0);
	}
	printf("\nDeleted element is : %d\n", q[front]);
	front++;
}

void display()
{
	int i;
	if(front == -1 || front > rear)
	{
		printf("\nQueue is Underflow\n");
		exit(0);
	}
	for(i = front; i <= rear; i++)
		printf("\t%d", q[i]);
	printf("\n");
}
