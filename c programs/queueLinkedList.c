#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
};

struct Node *front = NULL,*rear = NULL;

void EnQueue(int);
void DeQueue();
void display();

int main()
{
    int ch, value;
    while(1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Show\n4.Exit");  
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
         case 1:
                printf("\nInsert the value you want to enter: ");
                scanf("%d", &value);
                EnQueue(value);
                break;
         case 2:
                DeQueue();
                break;
         case 3:
                display();
                break;
         case 4:
                printf("\nRETURN TO HOME");
				exit(0);
        };
    }
   return 0;
}

void EnQueue(int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = NULL;

    if(front == NULL)
        front = rear = newNode;
    else
    {
        rear -> next = newNode;
        rear = newNode;
    }
}

void DeQueue()
{
    if(front == NULL)
        printf("\n Queue is Empty!!!\n");
    else
    {
        struct Node *temp = front;
        front = front -> next;
        printf("\n Deleted element is: %d\n", temp->data);
        free(temp);
    }
}

void display()
{
    if(front == NULL)
        printf("\n Queue is Empty!!!\n");
    else
    {
        struct Node *temp = front;
        while(temp->next != NULL)
        {
            printf("%d --> ",temp->data);
            temp = temp -> next;
        }
        printf("%d \n",temp->data);
   }
}
