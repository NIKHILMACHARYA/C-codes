#include<stdio.h>
#include<stdio.h>
int main()
{
          int i,j;
          char org[50],rev[50];
          printf("Enter the string:");
          gets(org);
          int l=strlen(org-1);
          j=l;
          for(i=0;i<=1;i++){
                    rev[j]=org[i];
                    j--;
          }
          rev[l+1]='\0';
          if(strcmp(rev,org==0)){
                    printf("%d is a palindrome",org);
          }
          else{
                    printf("%d is not a palindrome",org);
          }
          return 0;
          
}
