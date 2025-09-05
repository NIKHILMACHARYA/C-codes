#include<stdio.h>
 int fact(int n)
{
          int i,prod=1;
          for(i=1;i<=n;i++)
          {
                    prod=prod*i;
          }
          return prod;
 } 
 
 
 
 int main(){
           int i,j,k,n;
           printf("Enter the row:");
           scanf("%d",&n);
           for(i=0;i<=n-1;i++){
                     for(j=0;j<=n-i;j++){
                               printf(" ");
                     }
                     for(k=0;k<=i;k++){
                               printf("%d ",fact(i)/(fact(i-k)*fact(k)));
                     }
                     printf("\n");
           }
           return 0;
           
           
           
           
           
           
           
 }
 
 
 
 
