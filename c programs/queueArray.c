#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void enqueue();
void dequeue();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
    int choice;
    while (1)
    {
       printf("\n1.Enqueue\n2.Dequeue\n3.Show\n4.Exit");  
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            	enqueue();
            	break;
            case 2:
            	dequeue();
            	break;
            case 3:
            	display();
            	break;
            case 4:
           		printf("\nRETURN TO HOME");
				exit(0);
            default:
            	printf("Wrong choice \n");
        } 
    } 
    return 0;
} 
 
void enqueue()
{
    int add_item;
    if (rear == MAX - 1)
    printf("\nQueue Overflow");
    else
    {
        if (front == - 1)
        front = 0;
        printf("\nInset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}
 
void dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("\nQueue Underflow");
        return ;
    }
    else
    {
        printf("\nElement deleted from queue is : %d", queue_array[front]);
        front = front + 1;
    }
}
 
void display()
{
    int i;
    if (front == - 1)
        printf("\nQueue is empty");
    else
    {
        printf("\nQueue is :\n");
        for (i = front; i <= rear; i++)
            printf("%d\t", queue_array[i]);
        printf("\n");
    }
}
