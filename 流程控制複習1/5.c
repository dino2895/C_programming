#include<stdio.h>
int main(){
	char a[3]={0};
	gets(a);
	//printf("%d %d",a[0],a[2]);
	if(a[0]==a[2])
		printf("T");
	else
		printf("F");
}