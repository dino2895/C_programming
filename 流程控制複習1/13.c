#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	if (n%2==0||n%3==0)
		printf("Y");
	else
		printf("N");
}