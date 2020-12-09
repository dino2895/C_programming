#include<stdio.h>
#include<ctype.h>
int main(){
	char buf[50];
	puts("Enter message: ");
	gets(buf);
	puts("In B1FF-speak: ");
	for(int i=0;buf[i]!='\0';i++){
		switch(toupper(buf[i])){
			case 'A':buf[i]='4';break;
			case 'B':buf[i]='8';break;
			case 'E':buf[i]='3';break;
			case 'I':buf[i]='1';break;
			case 'O':buf[i]='0';break;
			case 'S':buf[i]='5';break;
		}
		putchar(buf[i]);
	}
	printf("!!!!!!!!!!");
}