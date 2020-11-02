#include<stdio.h>
int main (){
	char first[99],last[99];
	printf("Enter a first and last name: ");
	scanf("%s%s",first,last);
	printf("%s, %c.",last,first[0]);
}