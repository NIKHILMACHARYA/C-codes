#include<stdio.h>
int main()
{
          int a;
          float b;
          double c;
          printf("Enter the integer:");
          scanf("%d",&a);
          printf("Enter the float:");
          scanf("%f",&b);
          printf("Enter the double:");
          scanf("%lf",&c);
          double sum=a+b+c;
          double prod=a*b*c;
          double div=a/b/c;
          printf("sum=%lf\n",sum);
          printf("product=%lf\n",prod);
          printf("divident=%lf\n",div);
          return 0;
          
}
