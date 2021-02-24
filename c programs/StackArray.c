#include<stdio.h>
#include<stdlib.h>
#define size 10
struct stack
 {
   int s[size];
   int top;
} st;

int stfull()
 {
   if (st.top >= size - 1)
      return 1;
   else
      return 0;
}

void push(int item)
 {
   st.top++;
   st.s[st.top] = item;
}

int stempty()
 {
   if (st.top == -1)
      return 1;
   else
      return 0;
}

int pop() {
   int item;
   item = st.s[st.top];
   st.top--;
   return (item);
}

void display() 
{
   int i;
   if (stempty())
      printf("\nStack Is Empty!");
   else {
      for (i = st.top; i >= 0; i--)
         printf("\n\t%d", st.s[i]);
   }
}

int main()
 {
   int item, ch;
   char ans;
   st.top = -1;
   do
    {
      printf("\n1.Push \n2.Pop \n3.Display \n4.exit");
      printf("\nEnter Your Choice : ");
      scanf("%d", &ch);
      switch (ch)
      {
      case 1:
         printf("\nEnter The item to be pushed : ");
         scanf("%d", &item);
         if (stfull())
            printf("\nStack is Full!");
         else
            push(item);
         break;
      case 2:
         if (stempty())
            printf("\nEmpty stack!Underflow !!");
         else {
            item = pop();
            printf("\nThe popped element is : %d", item);
         }
         break;
      case 3:
         display();
         break;
      case 4:
        printf("\nRETURN TO HOME");
		exit(0);
      }
      
   } 
	while (1);
return 0;
}
