#include<stdio.h>
int main()
{
	char ch1;
	char word[25];
	char sentence[100];
	printf("Enter a character:");
	scanf("%c",&ch1);
	getchar();
	printf("Enter a word:");
	scanf("%s",&word);
	getchar();
	printf("Enter a sentence:");
	gets(sentence);
	getchar();
	printf("The character is:%c\n",ch1);
	printf("The word is:%s\n",word);
	printf("The sentence is:%s\n",sentence);
	return 0;
}
