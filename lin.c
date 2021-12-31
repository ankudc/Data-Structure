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
    printf("\n Enter the first value: ");
    scanf("%d",& p->info);

    printf("\n Enter next value: ");
    scanf("%d",&x);

    q=p;
    while(x>0)
	{
	   t=new list;
	   t->info=x;
	   q->next=t;
	   q=q->next; //or q=t
	   printf("\n Enter next value: ");
	   scanf("%d",& x);
	}
    q->next=NULL;

    t=p;

    printf("\n The list contains........\n\n");
    while(t)
	{
	  printf(" %d ",t->info);
	  t=t->next;
	}

}


