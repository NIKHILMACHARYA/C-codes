#include<stdio.h>
int main()
{
         int a,b,c,d,e;
         printf("Enter the 5 no:");
         scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
         if(a>b&&a>c&&a>d&&a>e){
                   printf("a=%d is the greatest",a);
         }
         else if(b>a&&b>c&&b>d&&b>e){
                   printf("b=%d is the greatest",b);
         }
         else if(c>a&&c>b&&c>d&&c>e){
                   printf("c=%d is the greatest",c);
         }
         else if(d>a&&d>b&&d>c&&d>e){
                   printf("d=%d is the greatest",d);
         }
         else if(e>a&&e>b&&e>c&&e>d){
                   printf("e=%d is the greatest",e);
         }
         return 0;
}



