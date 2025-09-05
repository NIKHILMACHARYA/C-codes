#include <stdio.h>
int main()
{
          int a[100],i,n,x,count;
          printf("Enter the no you want to store:");
          scanf("%d",&n);
          printf("Enter %d elements:\n",n);
          for(i=0;i<n;i++){
                   scanf("%d",&a[i]);
          }
          
          printf("Enter the search element:");
          scanf("%d",&x);
          for(i=0;i<n;i++){
               if(x==a[i]){
                    count++;
               }
          }
         if(count==0){
                   printf("%d is not found",x);
         }
         else{
                   printf("%d is found and occarance = %d",x,count);
         }
         return 0;
}

