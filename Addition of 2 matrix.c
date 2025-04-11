#include<stdio.h>
int main()
{
         int i,j,m,n,a[50][50],b[50][50],c[50][50];
         printf("Enter the rows of matrix:");
         scanf("%d",&m);
         printf("enter the column:");
         scanf("%d",&n);
         printf("Enter the content of A:");
         for(i=0;i<m;i++){
                   for(j=0;j<n;j++){
                             scanf("%d",&a[i][j]);
                   }
                   printf("\n");
         }
          printf("Enter the content of B:");
         for(i=0;i<m;i++){
                   for(j=0;j<n;j++){
                             scanf("%d",&b[i][j]);
                             c[i][j]=a[i][j]+b[i][j];
                   }
                   printf("\n");
         }
          printf("the content of A is \n");
         for(i=0;i<m;i++){
                   for(j=0;j<n;j++){
                             printf("%d",a[i][j]);
                   }
                   printf("\n");
         }
          printf("\n the content of B is \n");
         for(i=0;i<m;i++){
                   for(j=0;j<n;j++){
                             printf("%d",b[i][j]);
          }
          printf("\n");
         }
         printf("THe sum of two matrixs is \n");
         for(i=0;i<m;i++){
                   for(j=0;j<n;j++){
                             printf("%d",c[i][j]);
                   }
                   printf("\n");
         }
         return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

