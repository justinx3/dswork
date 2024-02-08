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
node*delpos(node*);
node*head;
void main()
{
head=(node*)malloc(sizeof(node));
clrscr();
create(head);
printf("The linked list is: ");
disp(head);
head=delpos(head);
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
else if(ch==1)
{
temp->next=(node*)malloc(sizeof(node));
create(temp->next);
}
else
printf("Invalid choice");
}

void disp(node*head)
{
node*temp;
temp=head;
if(temp==NULL)
printf("Stack Is Empty");
else
{
do
{
printf("%d ",temp->data);
temp=temp->next;
}
while(temp!=NULL);
}}

node* delpos(node*head)
{
node *temp,*pre;
int pos,co=0,i;
temp=head;
printf("\nEnter the position to delete: ");
scanf("%d",&pos);
if(temp==NULL)
printf("List is empty");
else
{

while(temp!=NULL)
{
temp=temp->next;
co++;
}}
if(pos>co||pos<1)
printf("Invalid choice");
else if(pos==1)
{
temp=head;
head=head->next;
free(temp);
return(head);
}
else
{
for(temp=head,i=1;i<pos;i++)
{
pre=temp;
temp=temp->next;
}
pre->next=temp->next;
free(temp);
}
return(head);
}
