#include<stdio.h>
int main(){
	char ch;
	int count=0;
	printf("Enter a message:");
	ch = getchar();
	while (ch != '\n'){
		count ++;
		ch = getchar();
	}
	printf("Your message was %d character(s) long.", count);
}