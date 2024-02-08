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
void search(node*,int);
void main()
{
node *t=NULL;
int item,x,ch;
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
printf("\nEnter the number to search\n");
scanf("%d",&item);
search(t,item);
getch();
}

void search(node *t,int item)
{
node* temp;
if(t==NULL)
{
printf("Tree empty");
return;
}
temp=t;
while(temp!=NULL)
{
if(temp->num==item)
{
printf("Item found");
break;
}
else if(item<temp->num)
temp=temp->left;
else
temp=temp->right;
}
if(temp==NULL)
printf("Item not found");
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