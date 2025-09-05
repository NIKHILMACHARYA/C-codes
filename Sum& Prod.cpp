#include<stdio.h>
int main()
{
         int i,n,num,prod=1,r,sum=0;
         printf("enter the numbers:");
         scanf("%d",&n);
         num=n;
         while(n!=0){
                   r=n%10;
                   prod=prod*r;
                   sum=sum+r;
                   n=n/10;
         }
         printf("Product of digits of %d=%d",num,prod);
         printf("\nSum of  digits of %d=%d",num,sum);
         return 0;
}
         
