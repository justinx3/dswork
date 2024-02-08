#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char infix[20] ,stk[20];
int l,i,top=-1;
clrscr();
printf("Enter the infix expression: ");
gets(infix);
l=strlen(infix);
infix[l]=')';
infix[++l]='\0';
stk[++top]='(';
printf("\nThe postfix expression\n");
for(i=0;infix[i]!='\0';i++)
{
if((infix[i]>='a'&&infix[i]<='z')||(infix[i]>='A'&&infix[i]<='Z')||(infix[i]>='0'&&infix[i]<='9'))
printf("%c",infix[i]);
else if(infix[i]=='(')
{
top++;
stk[top]=infix[i];
}
else if(infix[i]==')')
{
while(stk[top]!='(')
{
printf("%c",stk[top]);
top--;
}
top--;
}
else if(infix[i]=='^')
{
while(stk[top]=='^')
{
printf("%c",stk[top]);
top--;
}
top++;
stk[top]=infix[i];
}
else if(infix[i]=='*'||infix[i]=='/')
{
while(stk[top]=='*'||stk[top]=='/'||stk[top]=='^')
{
printf("%c",stk[top]);
top--;
}
top++;
stk[top]=infix[i];
}
else if(infix[i]=='+'||infix[i]=='-')
{
while(stk[top]=='*'||stk[top]=='/'||stk[top]=='^'||stk[top]=='+'||stk[top]=='-')
{
printf("%c",stk[top]);
top--;
}
stk[++top]=infix[i];
}
else
continue;
}
getch();
}