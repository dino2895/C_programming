#include<stdio.h>
#include<ctype.h>
int main(){
	char ch;
	int i=0;
	printf("Enter a sentence: ");
	while (ch != '\n'){
		ch = getchar();
		ch = toupper(ch);
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
			i++;
		}
	}
	printf("Your sentence contains %d vowels.",i);
}