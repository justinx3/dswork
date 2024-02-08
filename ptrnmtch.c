#include<stdio.h>
#include<conio.h>
void main()
{
    char text[20],pat[10];
    int a,b,i,j;
    printf("Enter a string:");
    gets(text);
    printf("enter the pattern to find:");
    gets(pat);
    a=strlen(pat);
    b=strlen(text);
    for(i=0;i<b-a;i++)
    {
        int j;
        for(j=o;j<a;j++)
        if(text[i+j]!=pat[j])
        break;
        if(j==a)
        printf("pattern found at position %d\n",i+1);
    }
    getch();
    }