#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	if ((n>=-99&&n<=-10)||(n>=10&&n<=99))
		printf("Y");
	else
		printf("N");
}