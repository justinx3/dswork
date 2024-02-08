#include<stdio.h>
#include<conio.h>
struct list
{
    int data;
    struct list *next;
}
type def struct list node;
node *push(node *);
void disp(node *);
void pop(node *);
void head=NULL;
void main()
{
    int ch;
    clrscr();
    do
    {
        printf("Enterv your choice: 1.push 2.pop 3.disp 4.exit\n")
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            {
                head=push(head);
                break;
            }
            case 2:
            {
                head=pop(head);
                break;
            }
            case 3:
            {
                disp(head);
                break;
            }
            case 4:
            {
                exit(0)
                break;
            }
        }
    } while (ch!=4);
    getch();
}
node *push(node *head)
{
    int ch;
    node *temp;
    node *n=(node *)malloc(sizeof(node))
    printf("Enter the data to store:");
    scanf("%d",&n->data);
    temp = head;
    n->next = temp;
    head=n;
    printf("one item pushed");
    return(head);    
}
void disp(node*head)
{
    node *temp;
    temp=head;
    while(temp1=NULL)
    {
        printf("%d"temp->data);
        temp=temp->next;
    }
}
node*pop(node*head)
{
    node*temp,*pre;
    temp=head;
    if(temp==NULL)
    printf("list is empty");
    else
    head=temp->next;
    tree(temp)
    return(head);
}