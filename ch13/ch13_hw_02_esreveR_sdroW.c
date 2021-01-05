#include<stdio.h>
#include<ctype.h>
int main(){
	char arr[100]={0};
	gets(arr);
	//printf("%d",sizeof(arr));
	for(int i=99;i>=0;i--){
		if(arr[i]!='\0')
			printf("%c",arr[i]);
	}
}