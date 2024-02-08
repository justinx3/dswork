#include<stdio.h>
#include<conio.h>
void main()
{
    char *s,str[10];
    int i,len;
    printf("Enter a string:");
    gets(str);
    s=str;
    len=strlen(str);
    printf(|"Reverse of the string is:");
    for(i=len;i>=0;i--)
    {
        printf("%c",*(s+i));
    }
getch();
}