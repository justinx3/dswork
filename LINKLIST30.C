#include<stdio.h>
#include<stdlib.h>
struct list
{
int data;
struct list*next;
};
typedef struct list node;
void create(node*);
void disp(node*);
node*head;
void main()
{
node*head=(node*)malloc(sizeof(node));
clrscr();
create(head);
printf("The linked list is: ");
disp(head);
getch();
}

void create(node*head)
{
int ch;
node*temp;
temp=head;
printf("Enter the data to store: ");
scanf("%d",&temp->data);
printf("Do you want to continue to create nodes: ");
scanf("%d",&ch);
if(ch==0)
temp->next=NULL;
else
{
temp->next=(node*)malloc(sizeof(node));
create(temp->next);
}}

void disp(node*head)
{
node*temp;
temp=head;
do
{
printf("%d ",temp->data);
temp=temp->next;
}
while(temp!=NULL);
}
