#include<stdio.h>
long linear_search(long[],long,long);
int main()
{

    long array [100],search,i,n,position;
    printf("Input number of elements in  array\n");
    scanf("%d",&n );
    printf("Input %d number\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("Input a number to search\n");
    scanf("%d",&search);
    position=linear_search(array,search,n);
    if(position == -1)
        printf("%d isn't present in the array\n",search);
    else
        printf("[%d is present at location %d\n",search,position+1);
    return 0;

}
long linear_search(long a[],long n,long find)
{
long i;

 for(i=0;i<n;i++)
    {
    if(a[i ]== find)
        return i;
}
//return i;
return -1;
}
