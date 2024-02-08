#include<stdio.h>
#include<conio.h>
struct tree
{
int num;
struct tree *left;
struct tree *right;
};
typedef struct tree node;
node* insert(node*,int);
void preorder(node*);
void postorder(node*);
void inorder(node*);
void main()
{
node *t=NULL;
int x,ch;
clrscr();
do
{
printf("Enter the number:");
scanf("%d",&x);
t=insert(t,x);
printf("Do you want to countinue");
scanf("%d",&ch);
}
while(ch!=0);
printf("\nThe BST using inorder traversal method\n");
inorder(t);
printf("\nThe BST using preorder traversal method\n");
preorder(t);
printf("\nThe BST using postorder traversal method\n");
postorder(t);
getch();
}

void inorder(node *t)
{
if(t!=NULL)
{
inorder(t->left);
printf("%d  ",t->num);
inorder(t->right);
}
}

void postorder(node *t)
{
if(t!=NULL)
{
postorder(t->left);
inorder(t->right);
printf("%d  ",t->num);
}
}

void preorder(node *t)
{
if(t!=NULL)
{
printf("%d  ",t->num);
preorder(t->left);
preorder(t->right);
}
}
node* insert(node* temp,int x)
{
node *r,*n,*t;
n=(node*)malloc(sizeof(node));
n->num=x;
n->left=NULL;
n->right=NULL;
r=temp;
t=NULL;
while(r!=NULL)
{
t=r;
if(r->num>x)
r=r->left;
else
r=r->right;
}
if(temp==NULL)
temp=n;
else if(t->num>x)
t->left=n;
else
t->right=n;
return(temp);
}