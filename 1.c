#include<stdio.h>
 int main()
  {
    int a[10],n,i,;
     printf("numer of elements");
     scanf("%d",&n);
     printf("Enter the elements");
      for(i=0;i<n;i++)
       scanf("%d",&a[i]);
       large=second=a[0];
      for(i=1;i<n;i++)
      {
         if(a[i]>large)
          {
            second=large;
            large=a[i];
          }
         else
         if(a[i]>second&a[i]!=largest)
          {
            second=a[i];
          }
      }
  }