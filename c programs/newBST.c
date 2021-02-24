#include<stdio.h>
#include<stdlib.h>

struct BST
{
	int INFO;
	struct node *LEFT, *RIGHT;
};
typedef struct BST node;

node *insert(node *, int);
void search(node *, int);
int del(node *, int);
void display(node *);

void main()
{
	struct node *root = NULL;
	int a, ch, n, f;
	
	
}
