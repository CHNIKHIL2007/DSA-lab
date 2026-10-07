#include<stdio.h>
  void main()
{
    int a[10],n,i;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter the array elements");
     for(i=0;i<n;i++)
      scanf( "%d",&a[i]);
     large=a[0];
     for(i=1;i<n;i++)
      if(a[i]>large)
      large=a[i];
    printf("largest number=%d",largest);

}