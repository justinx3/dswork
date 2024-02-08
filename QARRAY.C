#include<stdio.h>
#include<conio.h>
#define MAX 5
void insert(int[],int);
void del(int[]);
void disp(int[]);
int f=-1,r=-1;
void main()
{
int q[10],item,ch;
clrscr();
do
{
printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the item");
scanf("%d",&item);
insert(q,item);
break;
case 2:
del(q);
break;
case 3:
disp(q);
break;
case 4:
exit(0);
default:
printf("Invalid option");
}
}
while(ch!=4);
getch();
}


   void insert(int q[],int item)
      {
      if(r==MAX-1)
      printf("\nQueue overflow");
      else
      {
      if(f==-1)
      {
      f=0;
      r=0;
      }
      else
      r++;
      q[r]=item;
      printf("\nOne item inserted\n");
      }
      }
	 void del(int q[])
	 {
	 int item;
	    if(f==-1)
		printf("\nQueue underflow\n");
	     else
		{
		item=q[f];
		if(f==r)
		{
		f=-1;
		r=-1;
		}
		else
		f++;
		printf("\nOne item deleted %d\n",item);
		}
		}

	    void disp(int q[])
	    {
	    int i;
	    if(f==-1)
	    printf("\nQueue is empty\n");
	    else
	    for(i=f;i<=r;i++)
	    printf(" %d",q[i]);
	    }
