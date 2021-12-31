#include<stdio.h>
int main()
{

    int i,mid,search,array[100],high,low,n;
    printf("Enter the elements of array\n");
    scanf("%d",&n);
    printf("Enter %d integer\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("Enter the search value\n");
    scanf("[%d",&search);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
         if(array[mid]<search)
            low=mid+1;
            else if(array[mid]==search){
        printf("%d found at index\n",search,mid+1);

        break;
            }
            else

            high=mid-1;
 mid=(low+high)/2;
    }
    if(low>high)
         printf("%d isn't found at index\n",search);
    return 0;

}
