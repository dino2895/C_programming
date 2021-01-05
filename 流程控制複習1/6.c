#include<stdio.h>
int main(){
	char a[4]={0};
	gets(a);
	//printf("%d %d",a[0],a[2]);
	if(a[0]==a[3]&&a[1]==a[2])
		printf("T");
	else
		printf("F");
}