#include<stdio.h>
struct list
{
    int info;
    struct list *next;
};
int main()
{
    struct list *p,*q,*r,*t;
    int x,y;
    p=new list;
    printf("\nEnter the first value: ");
    scanf("%d",&p->info);
    printf("\nEnter the next value:");
    scanf("%d",&x);
    q=p;
    while(x>0)
    {
        t=new list;
        t->info=x;
        q->next=t;
        q=q->next;
        printf("\nEnter the next value:");
        scanf("%d",&x);
    }
    q->next=NULL;
    t=p;
    printf("\nThe list contain.......\n\n:");
    while(t)
    {
        printf("%d",t->info);
        t=t->next;
    }
    t=new list;

    t->info=x;
    int pos=5,fog=1;
    printf("\nAdd number:");
    //scanf("%d",&n);
    q=p;
    while((fog<=pos-1)&&(q!=NULL))
    {
        if(fog==pos-1)
        {
            t->next=q->next;
            q->next=t;
        }
        q=q->next;
        fog++;
    }
    q=p;
    while(q)
    {
        printf("%d",q->info);
        q=q->next;
    }
}

