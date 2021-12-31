#include<stdio.h>
struct list
{
    int info;
    struct list *next;
};
int main()
{
    struct list *p,*q,*t;
    int x,y;
    p=new list;
    printf("\nEnter the first value:");
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
    printf("\nthe list contains:");
        while(t!=NULL)
        {
            printf("%d",t->info);
            t=t->next;
        }
        int s;
        t=p;
        printf("\nEnter the search value:");
        scanf("%d",&s);
        while(t!=NULL)
        {
            if(t->info==s)
            {
            printf("Found number:%d",t->info);
            break;
            }
            t=t->next;
            if(t==NULL)
            {
                printf("The number is not found :");
                break;
            }
        }


}
