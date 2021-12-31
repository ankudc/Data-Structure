#include<stdio.h>
int main()
{
  int A[100],x,n,i,pos=-1;
  printf("Enter the elements of array\n");
  scanf("%d",&n);
  printf("Enter the integer value\n",n);
  for(i=0;i<n;i++)
  scanf("%d",&A[i]);
  printf("Enter the search Value\n");
  scanf("%d",&x);
  for(i=0;i<n;i++)
  {
      if(A[i]==x)
      {
          pos=i+1;
          break;
      }

  }
  if(pos==-1)
  {
      printf("Its Not found");
  }
  else{
    printf("Its Found",pos);
  }

    return 0;
}
