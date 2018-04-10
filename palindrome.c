#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){

	int i,j;
	char word[20], match[20];

	printf("******************* Program to check whether a word is Palindrom or not **********************\n\n");
	
	printf("Enter a word to check if it's a palindrome\t");
	scanf("%s",  word);
	
	i=strlen(word);

	for(j=0; j<strlen(word); j++){
		match[j] = word[i-1];
		i--;	
	}

	printf("\n\n");
	if(strcmp(match,word) == 0)
		printf("%s is Pelindrom\n\n",word);
	
	else
		printf("%s is not pelindrom\n\n",word);
	
	return 0;

}
