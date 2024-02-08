#include<stdio.h>
#include<conio.h>
#define max 5
void in(int[],int);
void del(int[]);
void disp(int[]);
int f=-1,r=-1;
void main()
{
int q[10],ch,item;
clrscr();

do
{
printf("1.Insertion 2.Deletion 3.Display 4.Exit");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("Enter item:");
scanf("%d",&item);
in(q,item);
break;
}
case 2:
{
del(q);
break;
}
case 3:
{
disp(q);
break;
}
case 4:
exit(0);
default:
printf("Invalid entry\n");
}}
while(ch!=4);
getch();
}

void in(int q[10],int item)
{
if(r==max-1)
printf("Overflow\n");
else
if(f==-1)
{
f=0;
r=0;
}
else
r++;
q[r]=item;
}

void del(int q[10])
{
int item;
if(f==-1)
printf("Underflow\n");
else
{
item=q[f];
if(f==r)
f=-1;
else
f++;
printf("Dequeued item is %d\n",item);
}}

void disp(int q[10])
{
int i;
if(f==-1)
printf("Queue is empty\n");
else
for(i=f;i<=r;i++)
printf("%d ",q[i]);
printf("\n");
}