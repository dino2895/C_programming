#include<stdio.h>
#include<ctype.h>
int main(){
char arr[100]={0};
	gets(arr);
	for(int i=0;i<99&&arr[i]!='\0';i++){
		arr[i]=toupper(arr[i]);
		printf("%c",arr[i]);
	}
	printf("\n");
	for(int i=0;i<99&&arr[i]!='\0';i++){
		arr[i]=tolower(arr[i]);
		printf("%c",arr[i]);
	}
}