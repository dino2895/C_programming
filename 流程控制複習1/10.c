#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	if (n%6==0)
		printf("6");
	else if(n%3==0&&n%2!=0)
		printf("3");
	else if(n%2==0&&n%3!=0)
		printf("2");
	else 
		printf("0");
}