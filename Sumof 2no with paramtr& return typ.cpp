#include<stdio.h>
void sum(int a,int b)
{
       int c;
       c=a+b;
       printf("sum=%d",c);   
}

int main ()
{
          int a,b;
          printf("Enter 2 no:");
          scanf("%d %d",&a,&b);
          sum(a,b);
          return 0;
}
