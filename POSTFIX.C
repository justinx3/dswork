#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
char post[20];
int i,top=-1;
float stk[20],a,b,c,v;
clrscr();
printf("Enter the postfix expression:");
gets(post);
puts(post);
for(i=0;post[i]!= '\0';i++)
	{
	if(post[i]>='0'&&post[i]<='9')
		{
		top++;
		stk[top]=post[i]-'0';
		}
	else if((post[i]>='a'&&post[i]<='z')||(post[i]>='A'&&post[i]<='Z'))
		{
		printf("\nEnter the value of the operand %c:",post[i]);
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
			case'+':
				c=b+a;
				break;
			case'-':
				c=b-a;
				break;
			case'*':
				c=b*a;
				break;
			case'/':
				c=b/a;
				break;
			case'^':
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




