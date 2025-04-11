#include<stdio.h>
int main()
{
          int n,num,sum=0,d=0,r;
          printf("Enter the no:");
          scanf("%d",&n);
          num=n;
          while(n!=0){
                    n=n/10;
                    d++;
          }
          n=num;
          while(n!=0){
                    r=n%10;
                    sum=sum+pow(r,d);
                    n=n/10;
          }
          if(sum==num){
                    printf("%d is an armstrong number",num);
          }
          else{
                    printf("%d is not an armstrong number",num);
          }
          return 0;
          
}
