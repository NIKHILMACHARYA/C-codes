#include<stdio.h>
int main()
{
          int a[100],n,i;
          printf("Enter a no of elements:");
          scanf("%d",&n);
          printf("Enter the %d elements",n);
          for(i=0;i<n;i++){
                    scanf("%d",&a[i]);
          }
          printf("Content in forward order");
          for(i=0;i<n;i++){
                    printf("%d ",a[i]);
          }
          printf("\nContent in revrse order");
          for(i=n-1;i>=0;i--){
                    printf("%d ",a[i]);
          
           }
          return 0;
     
} 
