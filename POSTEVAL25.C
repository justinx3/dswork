#include<stdio.h>
#include<conio.h>
void main()
{
char post[20];
int i,top=-1;
float stk[20],a,b,c,v;
clrscr();
printf("Enter the postfix expression:");
gets(post);
for(i=0;post[i]!='\0';i++)
{
if(post[i]>='0'&&post[i]<='9')
{
top++;
stk[top]=post[i]-'0';
}
else if((post[i]>='a'&&post[i]>='z')||(post[i]>='A'&&post[i]>='Z'))
{
printf("Enter the value of operand %c",post[i]);
scanf("%f",&v);
top++;
stk[top]=v;
}
else
{
a=stk[top];
top--;
b=stk[top];
top--;
switch(post[i])
{
case '+':
c=b+a;
break;
case '-':
c=b-a;
break;
case '*':
c=b*a;
break;
case '/':
zc=b/a;
break;
case '^':
c=pow(b,a);
break;
}
top++;
stk[top]=c;
}
}
printf("Value of expression is %.2f",stk[top]);
getch();
}