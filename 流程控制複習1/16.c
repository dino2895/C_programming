#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	if(n%100==0){
		if(n%400==0)
			printf("Y");
		else
			printf("N");
	}
	else{
		if(n%4==0)
			printf("Y");
		else
			printf("N");
	}
}