   #include<stdio.h>
   int iterativeBsearch(int A[], int n, int element);
   int main()
   {
int A[] = {0,12,6,12,12,18,34,45,55,99}
    n=55;
printf("%d is found at Index %d \n",n,iterativeBsearch(A,10,n));
   return 0;
}
int iterativeBsearch(int A[], int n, int element) {
   int low = 0;
   int high = n-1;
   while(low<=high) {
      int mid = (low+high)/2;
      if( A[mid] == element) {
         return mid;
      } else if( element < A[mid] ) {
         high = mid-1;
      } else {
         low = mid+1;
      }
   }
   return -1;
}

