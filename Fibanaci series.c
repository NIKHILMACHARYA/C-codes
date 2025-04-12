#include <stdio.h>
int main()
{
          int a[100],n,i;
          printf("Enter the terms to be generated:");
          scanf("%d",&n);
          a[0]=0;
          a[1]=1;
          for(i=2;i<n;i++){
                    a[i]=a[i-1]+a[i-2];
          }
          printf("Fibanaci series is %d ",i);
          return 0;
}
