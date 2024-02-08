#include<stdio.h>
#include<conio.h>
void main()
{
    char a[50][50],temp[50];
    int i,j,n,x;
    clrscr();
    printf("Enter the number of names:");
    scanf("%d",&n);
    printf("Enter the names:");
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    printf("Unsorted names are:");
    for(i=0;i<n;i++)
    {
        printf("\n%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            x=strcmp(a[i],a[j]);
            if(x>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
getch();
}