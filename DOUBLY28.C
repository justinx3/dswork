#include<stdio.h>
#include<conio.h>
struct dlist
{
int num;
struct dlist *pre,*next;
};
typedef struct dlist node;
void create(node*);
void fdisp(node*);
void bdisp(node*);
void main()
{
node *st;
clrscr();
st=(node*)malloc(sizeof (node));
st->pre=NULL;
create(st);
printf("Forward display: ");
fdisp(st);
printf("\nBackward display: ");
bdisp(st);
getch();
}

void create(node*dl)
{
int ch;
printf("Enter the number: ");
scanf("%d",&dl->num);
printf("Do you want to add more numbers: ");
scanf("%d",&ch);
if(ch==0)
{
dl->next = NULL;
}
else
{
dl->next = (node *) malloc(sizeof(node));
dl->next->pre=dl;
create(dl->next);
}}

void fdisp(node*dl)
{
if(dl == NULL)
printf("Linked list is empty");
else
{
while(dl != NULL)
{
printf("%d ",dl->num);
dl=dl->next;
}}}

void bdisp(node*dl)
{
node *temp;
while(dl->next != NULL)
{
dl=dl->next;
}
while(dl != NULL)
{
printf("%d ",dl->num);
dl=dl->pre;
}}
