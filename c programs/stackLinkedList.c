#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void display();  
struct node   
{  
int val;  
struct node *next;  
};  
struct node *head;  
  
int main()  
{  
    int ch=0;      
    while(ch != 4)  
    {   
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice : ");        
        scanf("%d",&ch);  
        switch(ch)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                printf("\nRETURN TO HOME");
				exit(0);   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    	};  
	}  
	return 0;
}  
void push()  
{  
    int val;  
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        printf("\nNot able to push the element");   
    }  
    else   
    {  
        printf("Enter the value : ");  
        scanf("%d",&val);  
        if(head==NULL)  
        {         
            ptr->val = val;  
            ptr -> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->val = val;  
            ptr->next = head;  
            head=ptr;  
               
        }  
         
          
    }  
}  
  
void pop()  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        printf("\nUnderflow");  
    }  
    else  
    {  
        item = head->val;  
        ptr = head;  
        head = head->next;  
        free(ptr);  
        printf("\nItem popped");  
          
    }  
}  
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("\nStack is empty\n");  
    }  
    else  
    {  
        printf("Printing Stack elements : \n");  
        while(ptr!=NULL)  
        {  
            printf("\t%d\n",ptr->val);  
            ptr = ptr->next;  
        }  
    }  
}  
