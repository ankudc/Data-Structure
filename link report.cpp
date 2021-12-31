
#include<stdio.h>
struct node
{
    int data;
    struct node *next;

}head;

void createlist(int n);
void displaylist();
int search(int x);
int main()
{
    int n,x,y,index;
    printf("Enter number of node to create:");
    scanf("%d",&n);
    createlist(n);
    printf("\nData in list:\n");
    displaylist();
    printf("\nEnter element to search:");
    scanf("%d",&x);
    index=search(x);
    if(index>=0)
        printf("%d found in the position%d\n: ",x,index+1);
    else
        printf("%d not found in the list:",x);
    return 0;
}
void createlist(int n)
{
    struct node *newNode,*temp;
    int data,i;
    head = malloc(sizeof(struct node));
    if(head=NULL)
    {
        printf("Unable to allocate memory.Exiting from app:");
        exit(0);
        printf("Enter data of node:");
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;
        temp=head;
        for(i=2;i<=n;i++)
           newNode= malloc(sizeof(struct node));
        if(newNode==NULL)
        {
        printf("Unable to allocate memory.Exiting from app:");
        exit(0);
        }
        printf("Enter data of node:");
        scanf("%d",&data);
        newNode->data=data;
        newNode->next=NULL;
        temp->next=newNode;
        temp=temp->next;

    }
}
void displaylit()
{
    struct node *next;
    if(head=NULL)
    {
        printf("list is empty\n");
        return;
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int search(int x)
{
    int index;
    struct node *curNode;
    index=0;
    curNode=head;
    while(curNode!=NULL&&curNode->data!=x)
    {
        index++;
        curNode=curNode->next;
    }
    return(curNode!=NULL)?index:-1;
}
