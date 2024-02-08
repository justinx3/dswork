#include<stdio.h>
void main()
{
int a[10],i,n;
clrscr();
printf("Enter the limit of the array");
scanf("%d",&n);
printf("Enter the element of the array");
for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
printf("\nthe array is :");
for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
printf("enter the position to delete : ");
scanf("%d",&pos);
for(i=pos-1;i<n;i++)
    {
    a[i]=a[i+1];
    }
n--;
printf("\n array after new elements");
for(i=0;i<n;i++)
    {
    printf("%d", a[i]);
    }
   getch();
   }
