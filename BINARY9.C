#include<stdio.h>
void main()
{
int a[10],i,l,j,t,m,f,n,s;
clrscr();
printf("Enter the limit of array:");
scanf("%d",&l);
for(i=0;i<l;i++)
    {
    printf("Enter elements:");
    scanf("%d",&a[i]);
    }
printf("Array\n");
for(i=0;i<l;i++)
    {
    printf(" %d",a[i]);
    }
for(i=0;i<l-1;i++)
    {
	for(j=i+1;j<l;j++)
	{
	if(a[i]>a[j])
		{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		}
	}
     }
printf("\n Sorted array:");
for(i=0;i<l;i++)
	{
	printf(" %d",a[i]);
	}
printf("\nENTER ELEMENTS TO SEARCH:");
scanf("%d",&s);
f=0;
n=l-1;
while(f<=n)
	{
	m=(f+1)/2;
	if(a[m]==s)
		{
		printf("\nItem found at:%d",m);
		break;
		}
	else if(a[m]<s)
		{
		f=m+1;
		break;
		}
	else
		{
		n=m-1;
		break;
		}
		}
if(f>n)
{
printf("Element not found");
}
getch();
}

