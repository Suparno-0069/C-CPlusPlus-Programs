#include<stdio.h>
#include<stdlib.h>

struct binTree
{
	int INFO;
	struct node *LEFT, *RIGHT;
};
typedef struct binTree node;

node *insert(node *, int);
void display(node *);
int count = 1;

int main()
{
	struct node *root = NULL;
	int a, ch;
	
	while(1)
	{
		printf("\n1-INSERT, \n2-DISPLAY, \n3-EXIT");
		printf("\nEnter your choice : ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the node value : ");
				scanf("%d", &a);
				root = insert(root, a);
				break;
			case 2:
				display(root);
				break;
			case 3:
				printf("\nRETURN TO HOME");
				exit(0);
		}
	}
	return 0;
}

node *insert(node *r, int a)
{
	if(r == NULL)
	{
		r = (node*)malloc(sizeof(node));
		r->LEFT = r->RIGHT = NULL;
		r->INFO = a;
		count += 1;
	}
	else
	{
		if(count%2 == 0)
			r->LEFT = insert(r->LEFT, a);
		else
			r->RIGHT = insert(r->RIGHT, a);
	}
	return (r);
}

void display(node *r)
{
	if(r->LEFT != NULL)
		display(r->LEFT);
	printf("\t%d\n", r->INFO);
	if(r->RIGHT != NULL)
		display(r->RIGHT);
}
