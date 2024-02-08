#include<stdio.h>
void main()
{
int a[10],i,n;
clrscr();
printf("Enter the limit of the array:");
scanf("%d",&n);
printf("Enter the element of the array:");
for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
printf("\nThe array is :");
for(i=0;i<n;i++)
    {
    printf(" %d",a[i]);
    }
for(i=0;i<n-1;i++)
    {
    a[i]=a[i+1];
    }
n--;
printf("\n Array after new elements");
for(i=0;i<n;i++)
    {
    printf(" %d", a[i]);
    }
   getch();
   }
