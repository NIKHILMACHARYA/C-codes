#include<stdio.h>
int main()
{
         int i,j,m,n;
         printf("Enter the rows of matrix:");
         scanf("%d",&m);
         printf("enter the column:");
         scanf("%d",&n);
         int a[50][50],transpose[50][50];
         printf("Enter the elements:");
         for(i=0;i<m;i++){
                   for(j=0;j<n;j++){
                             scanf("%d",&a[i][j]);
                   }
                   printf("\n");
         }
         for(i=0;i<m;i++){
                   for(j=0;j<n;j++){
                             transpose[j][i]=a[i][j];
                   }
                   printf("\n");
         }
          printf("the original matrix is \n");
         for(i=0;i<m;i++){
                   for(j=0;j<n;j++){
                             printf("%d ",a[i][j]);
                   }
                   printf("\n");
         }
         printf("Transpose of matrixs is \n");
         for(i=0;i<m;i++){
                   for(j=0;j<n;j++){
                             printf("%d ",transpose[i][j]);
                   }
                   printf("\n");
         }
         return 0;
}
